/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:25:25 by bazaluga          #+#    #+#             */
/*   Updated: 2023/12/09 05:30:13 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lftest.h"

void			*(*g_real_malloc)(size_t) = NULL;
void			(*g_real_free)(void*) = NULL;
int				g_malloc_fail;
size_t			g_last_malloc_size;
t_leaks_tracer	g_leaks;
char			*g_leaks_text;

void		get_real_malloc()
{
	if (!g_real_malloc)
	{
		g_real_malloc = dlsym(RTLD_NEXT, "malloc");
		while (g_real_malloc && g_real_malloc == malloc)
			g_real_malloc = dlsym(RTLD_NEXT, "malloc");
		if (!g_real_malloc)
			exit(EXIT_FAILURE);
	}
}

t_malloc	*malloc_new(unsigned long addr, size_t size, size_t rank)
{
	t_malloc	*new;

	get_real_malloc();
	new = (t_malloc *)g_real_malloc(sizeof(t_malloc));
	if (!new)
		return (NULL);
	new->addr = addr;
	new->size = size;
	new->rank = rank;
	new->next = NULL;
	return (new);
}

char		*malloc_get_text(t_malloc *m)
{
	char	*text;

	get_real_malloc();
	if (!(text = (char *)g_real_malloc(sizeof(char) * 128)))
		return NULL;
	sprintf(text, "%lu bytes at address 0x%lx (malloc number %lu)",
		m->size, m->addr, m->rank);
	return (text);
}

void		leaks_tracer_insert_malloc(t_leaks_tracer *lst, t_malloc *new)
{
	t_malloc	*tmp;

	if (!lst->in_use) return;
	if (!lst->first_malloc)
	{
		lst->first_malloc = new;
		lst->first_malloc->rank = 1;
	}
	else
	{
		tmp = lst->first_malloc;
		while (tmp && tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		tmp->next->rank = tmp->rank + 1;
	}
	lst->count++;
}

void		leaks_tracer_delete_malloc(t_leaks_tracer *lst, unsigned long addr)
{
	t_malloc	*tmp;
	t_malloc	*to_free;

	if (!lst->in_use) return;
	if (!g_real_free) free(NULL);
	tmp = lst->first_malloc;
	if (tmp && tmp->addr == addr)
	{
		lst->first_malloc = tmp->next;
		tmp->next = NULL;
		g_real_free(tmp);
	}
	else
	{
		while (tmp)
		{
			if (tmp->next && tmp->next->addr == addr)
			{
				to_free = tmp->next;
				tmp->next = tmp->next->next;
				to_free->next = NULL;
				g_real_free(to_free);
				tmp = NULL;
			}
			if (tmp)
				tmp = tmp->next;
		}
	}
	lst->count--;
}

void		leaks_tracer_reset(t_leaks_tracer *lst)
{
	t_malloc	*tmp;

	if (!g_real_free) free(NULL);
	tmp = lst->first_malloc;
	while (lst->count > 0 && tmp)
	{
		lst->first_malloc = lst->first_malloc->next;
		tmp->next = NULL;
		g_real_free(tmp);
		tmp = lst->first_malloc;
		lst->count--;
	}
	lst->first_malloc = NULL;
	lst->count = 0;
	lst->in_use = 0;
}

void		leaks_tracer_start(t_leaks_tracer *lst)
{
	lst->in_use = 1;
}

void		leaks_tracer_stop(t_leaks_tracer *lst)
{
	lst->in_use = 0;
}

char		*leaks_tracer_text(t_leaks_tracer *lst)
{
	char		*text;
	t_malloc	*m;
	size_t		i;
	char		*s;
	int			count;

	if (lst->count <= 0) return (leaks_tracer_reset(lst), NULL);
	if (!g_real_free) free(NULL);
	char		*intro = lst->count == 1 ? "Your function has a leak:\n"
										: "Your function has leaks:\n";
	if (!(text = (char *)calloc(lst->count * 128 + strlen(intro), sizeof(char))))
		return (NULL);
	sprintf(text, "%s", intro);
	count = 1;
	m = lst->first_malloc;
	while (m)
	{
		i = strlen(text);
		s = malloc_get_text(m);
		sprintf(text + i, "\t\t\t\t%d) %s\n", count, s);
		g_real_free(s);
		m = m->next;
	}
	return (text);
}

t_malloc	*leaks_tracer_find_by_addr(t_leaks_tracer *lst, void *addr)
{
	t_malloc	*res;

	res = lst->first_malloc;
	while (res)
	{
		if (res->addr == (unsigned long)addr)
			return (res);
		res = res->next;
	}
	return (NULL);
}

void		*malloc(size_t size)
{
	if (!g_real_malloc)
		g_real_malloc = dlsym(RTLD_NEXT, "malloc");
	if (!g_real_malloc)
		exit(EXIT_FAILURE);
	if (g_malloc_fail == 1)
	{
		g_last_malloc_size = 0;
		return (NULL);
	}
	else if (g_malloc_fail > 1)
		g_malloc_fail--;
	g_last_malloc_size = size;
	void	*ptr = g_real_malloc(size);
	leaks_tracer_insert_malloc(&g_leaks, malloc_new((unsigned long)ptr, size, 0));
	return (ptr);
}

void		free(void *ptr)
{
	if (!g_real_free)
		g_real_free = dlsym(RTLD_NEXT, "free");
	if (!g_real_free)
		exit(EXIT_FAILURE);
	leaks_tracer_delete_malloc(&g_leaks, (unsigned long)ptr);
	g_real_free(ptr);
}

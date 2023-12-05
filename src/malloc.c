/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:25:25 by bazaluga          #+#    #+#             */
/*   Updated: 2023/12/05 15:46:53 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lftest.h"

void			*(*g_real_malloc)(size_t) = NULL;
int				g_malloc_fail;
size_t			g_last_malloc_size;
t_leaks_tracer	g_leaks;

void	update_leaks_tracer(t_leaks_tracer leaks_trace)
{
	t_malloc	*tmp;

	tmp = leaks_trace.first_malloc;
	leaks_trace.count = 0;
	while (tmp)
	{
		leaks_trace.count++;
		tmp = tmp->next;
	}
}

t_malloc	*malloc_new(unsigned long addr, size_t size)
{
	t_malloc	*new;

	if (!g_real_malloc)
	{
		FAIL_MALLOC;
		free(malloc(0));
	}
	new = (t_malloc *)g_real_malloc(sizeof(t_malloc));
	if (!new)
		return (NULL);
	new->addr = addr;
	new->size = size;
	new->next = NULL;
	return (new);
}

void	leaks_tracer_insert(t_leaks_tracer lst, t_malloc *new)
{
	t_malloc	*tmp;

	if (!lst.first_malloc)
		lst.first_malloc = new;
	else
	{
		tmp = new;
		while (tmp && tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	lst.count++;
}

void	leaks_tracer_delete(t_leaks_tracer lst, unsigned int addr)
{
	t_malloc	*tmp;
	t_malloc	*to_free;

	tmp = lst.first_malloc;
	if (tmp && tmp->addr == addr)
	{
		lst.first_malloc = tmp->next;
		tmp->next = NULL;
		free(tmp);
	}
	else
	{
		while (tmp)
		{
			if (tmp->next->addr == addr)
			{
				to_free = tmp->next;
				tmp->next = tmp->next->next;
				to_free->next = NULL;
				free(to_free);
				tmp = NULL;
			}
			if (tmp)
				tmp = tmp->next;
		}
	}
	lst.count--;
}

void	leaks_tracer_reset(t_leaks_tracer lst)
{
	t_malloc	*tmp;

	tmp = lst.first_malloc;
	while (lst.count > 0 && tmp)
	{
		lst.first_malloc = lst.first_malloc->next;
		tmp->next = NULL;
		free(tmp);
		tmp = lst.first_malloc;
		lst.count--;
	}
}

char	*leaks_tracer_text(t_leaks_tracer lst)
{
// Create text for summary of leaks (nb and total size)
}

void	*malloc(size_t size)
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
	leaks_tracer_insert(g_leaks, malloc_new((unsigned long)ptr, size));
	return (ptr);
}

/* void	free(void *ptr) */
/* { */
/* 	leaks_tracer_delete(g_leaks, ) */
/* } */

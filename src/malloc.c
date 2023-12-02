/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:25:25 by bazaluga          #+#    #+#             */
/*   Updated: 2023/12/01 18:12:34 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lftest.h"

int		g_malloc_fail;
size_t	g_last_malloc_size;

void	*malloc(size_t size)
{
	static void	*(*real_malloc)(size_t) = NULL;
	if (g_malloc_fail == 1)
	{
		g_last_malloc_size = 0;
		return (NULL);
	}
	else if (g_malloc_fail > 1)
		g_malloc_fail--;
	if (!real_malloc)
		real_malloc = dlsym(RTLD_NEXT, "malloc");
	if (!real_malloc)
		exit(EXIT_FAILURE);
	g_last_malloc_size = size;
	void	*ptr = real_malloc(size);
	return (ptr);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:25:25 by bazaluga          #+#    #+#             */
/*   Updated: 2023/11/29 11:18:15 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lftest.h"

extern int		g_malloc_fail;
extern size_t	g_last_malloc_size;

void	*malloc(size_t size)
{
	static void	*(*real_malloc)(size_t) = NULL;
	if (g_malloc_fail == 1)
	{
		g_malloc_fail = 0;
		return (NULL);
	}
	if (!real_malloc)
		real_malloc = dlsym(RTLD_NEXT, "malloc");
	if (!real_malloc)
		exit(EXIT_FAILURE);
	g_last_malloc_size = size;
	void	*ptr = real_malloc(size);
	return (ptr);
}

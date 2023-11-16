/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmalloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:32:06 by bazaluga          #+#    #+#             */
/*   Updated: 2023/11/16 16:22:46 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lftest.h"

void	*mmalloc(size_t size)
{
	if (g_malloc_fail == 1)
	{
		g_malloc_fail = 0;
		g_last_malloc_size = 0;
		return (NULL);
	}
	#undef malloc
	g_last_malloc_size = size;
	void	*ptr = malloc(size);
	#define malloc(x) mmalloc(x)
	return (ptr);
}

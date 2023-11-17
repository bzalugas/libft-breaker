/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmalloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:32:06 by bazaluga          #+#    #+#             */
/*   Updated: 2023/11/17 11:36:36 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lftest.h"
extern size_t g_last_malloc_size;
void	*mmalloc(size_t size)
{
	write(1, "\nHERE\n", 6);
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

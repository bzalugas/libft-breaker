/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmalloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:32:06 by bazaluga          #+#    #+#             */
/*   Updated: 2023/11/15 14:12:17 by bazaluga         ###   ########.fr       */
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
	g_last_malloc_size = size;
	return (malloc(size));
}

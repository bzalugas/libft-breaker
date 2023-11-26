/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:25:25 by bazaluga          #+#    #+#             */
/*   Updated: 2023/11/26 07:50:56 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lftest.h"

extern int		g_malloc_fail;
extern size_t	g_last_malloc_size;

void	*malloc(size_t size)
{
	if (g_malloc_fail == 1)
	{
		g_last_malloc_size = 0;
		g_malloc_fail = 0;
		return (NULL);
	}
	void	*(*real_malloc)(size_t) = dlsym(RTLD_NEXT, "malloc");
	if (!real_malloc)
		exit(EXIT_FAILURE);
	g_last_malloc_size = size;
	void	*ptr = real_malloc(size);
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:28:16 by bazaluga          #+#    #+#             */
/*   Updated: 2023/09/08 11:20:27 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lftest.h"

int	main(void)
{
	/* char *d = s; */
	char	d[BUFFSIZE];
	char	s[BUFFSIZE];
	/* char	*s = NULL; */
	size_t	n = BUFFSIZE;
	int		i;

	strcpy(s, "coucou");
	printf("d before:\t");
	i = -1;
	while (++i < BUFFSIZE)
	{
		printf("%d ", d[i]);
	}
	printf("\n");
	printf("s:\t\t");
	i = -1;
	while (++i < BUFFSIZE)
		printf("%d ", s[i]);
	printf("\n");
	/* SANDBOX(memcpy(d,s,n);); */
	/* printf("return = %d\n", g_exit_code); */
	memcpy(d, s, n);
	printf("d after:\t");
	i = -1;
	while (++i < BUFFSIZE)
		printf("%d ", d[i]);
	printf("\n");
	write(1, "\n", 1);
	return (0);
}

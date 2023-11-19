/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lftest.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:25:24 by bazaluga          #+#    #+#             */
/*   Updated: 2023/11/19 12:25:21 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LFTEST_H
# define LFTEST_H
# include "CuTest.h"
# include "../libft/libft.h"
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# ifdef __linux__
#  include <bsd/string.h>
# endif
# include <stdlib.h>
# include <unistd.h>
# include <errno.h>
# include <sys/wait.h>
# include <limits.h>
# define BUFFSIZE 30
# define BUFFBSIZE 30000
# define ANSI_COLOR_RED     "\033[31m"
# define ANSI_COLOR_GREEN   "\033[32m"
# define ANSI_COLOT_RESET	"\033[0m"

extern int		g_exit_code;
extern pid_t	g_pid;
extern size_t	g_last_malloc_size;
extern int		g_malloc_fail;

/* void	*malloc(size_t size); */

# define FAIL_MALLOC g_malloc_fail = 1;

# define SANDBOX(X) if ((g_pid = fork()) == -1){perror("Error during fork");exit(1);}if (!g_pid){X;exit(0);}wait(&g_exit_code);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lftest.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:25:24 by bazaluga          #+#    #+#             */
/*   Updated: 2023/11/26 06:01:04 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LFTEST_H
# define LFTEST_H
# define _GNU_SOURCE
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
# include <dlfcn.h>
# define BUFFSIZE 30
# define BUFFBSIZE 30000
# define ANSI_COLOR_RED     "\033[31m"
# define ANSI_COLOR_GREEN   "\033[32m"
# define ANSI_COLOT_RESET	"\033[0m"

typedef struct	s_ft
{
	char	*fun_name;
	void	*fun;
	void	*test_fun;
}				t_ft;

extern int		g_exit_code;
extern pid_t	g_pid;
extern size_t	g_last_malloc_size;
extern int		g_malloc_fail;
extern t_ft		fcts[31];

# define FAIL_MALLOC g_malloc_fail = 1;

# define SANDBOX(X) if ((g_pid = fork()) == -1){perror("Error during fork");exit(1);}if (!g_pid){X;exit(0);}wait(&g_exit_code);

void	init_fcts(void);
void	*get_fun(char *name);
void	*get_test_fun(char *name);

CuSuite	*ft_isalpha_get_suite();
CuSuite	*ft_isdigit_get_suite();
CuSuite	*ft_isalnum_get_suite();
CuSuite	*ft_isascii_get_suite();
CuSuite	*ft_isprint_get_suite();
CuSuite	*ft_strlen_get_suite();
CuSuite	*ft_memset_get_suite();
CuSuite	*ft_bzero_get_suite();
CuSuite	*ft_memcpy_get_suite();
CuSuite	*ft_memmove_get_suite();
CuSuite	*ft_strlcpy_get_suite();
CuSuite	*ft_strlcat_get_suite();
CuSuite	*ft_toupper_get_suite();
CuSuite	*ft_tolower_get_suite();
CuSuite	*ft_strchr_get_suite();
CuSuite	*ft_strrchr_get_suite();
CuSuite	*ft_strncmp_get_suite();
CuSuite	*ft_memchr_get_suite();
CuSuite	*ft_memcmp_get_suite();
CuSuite	*ft_strnstr_get_suite();
CuSuite	*ft_atoi_get_suite();
CuSuite	*ft_calloc_get_suite();
CuSuite	*ft_strdup_get_suite();
CuSuite	*ft_substr_get_suite();
CuSuite	*ft_strjoin_get_suite();
CuSuite	*ft_strtrim_get_suite();

#endif

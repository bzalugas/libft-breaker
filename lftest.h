/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lftest.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:25:24 by bazaluga          #+#    #+#             */
/*   Updated: 2023/11/29 11:22:18 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LFTEST_H
# define LFTEST_H
# define _GNU_SOURCE
# include "CuTest.h"
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
# define ANSI_COLOR_RESET	"\033[0m"

typedef struct	s_ft
{
	char	*fun_name;
	void	*fun;
	void	*test_fun;
}				t_ft;

typedef struct	print_buff
{
	char	color;
	char	txt[3000];
}				print_buff;

extern int			g_exit_code;
extern pid_t		g_pid;
extern size_t		g_last_malloc_size;
extern int			g_malloc_fail;
extern t_ft			fcts[31];
extern int			g_n_tests_fun;
extern print_buff	buff;
extern int			g_in_fun;

# define FAIL_MALLOC g_malloc_fail = 1;
# define END_FAIL g_malloc_fail = 0;

# define SANDBOX(X) if ((g_pid = fork()) == -1){perror("Error during fork");exit(1);}if (!g_pid){X;exit(0);}wait(&g_exit_code);

void	*init_fcts();
void	*get_fun(char *name);
void	*get_test_fun(char *name);
void	add_txt_buff(char *txt);
void	add_color_buff(char c);
void	printbuff();

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
CuSuite	*ft_split_get_suite();
CuSuite	*ft_itoa_get_suite();
CuSuite	*ft_strmapi_get_suite();
CuSuite	*ft_striteri_get_suite();
CuSuite	*ft_putchar_fd_get_suite();
CuSuite	*ft_putstr_fd_get_suite();
CuSuite	*ft_putendl_fd_get_suite();
CuSuite	*ft_putnbr_fd_get_suite();

#endif

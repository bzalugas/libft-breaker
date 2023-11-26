/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lftest.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:25:24 by bazaluga          #+#    #+#             */
/*   Updated: 2023/11/26 04:31:30 by bazaluga         ###   ########.fr       */
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

extern int		g_exit_code;
extern pid_t	g_pid;
extern size_t	g_last_malloc_size;
extern int		g_malloc_fail;

# define FAIL_MALLOC g_malloc_fail = 1;

# define SANDBOX(X) if ((g_pid = fork()) == -1){perror("Error during fork");exit(1);}if (!g_pid){X;exit(0);}wait(&g_exit_code);

typedef union
{
	struct
	{
		void	*ft_isalpha;
		void	*ft_isdigit;
		void	*ft_isalnum;
		void	*ft_isascii;
		void	*ft_isprint;
		void	*ft_strlen;
		void	*ft_memset;
		void	*ft_bzero;
		void	*ft_memcpy;
		void	*ft_memmove;
		void	*ft_strlcpy;
		void	*ft_strlcat;
		void	*ft_toupper;
		void	*ft_tolower;
		void	*ft_strchr;
		void	*ft_strrchr;
		void	*ft_strncmp;
		void	*ft_memchr;
		void	*ft_memcmp;
		void	*ft_strnstr;
		void	*ft_atoi;
		void	*ft_calloc;
		void	*ft_strdup;
		void	*ft_substr;
		void	*ft_strjoin;
		void	*ft_strtrim;
		void	*ft_split;
		void	*ft_itoa;
		void	*ft_strmapi;
		void	*ft_striteri;
		void	*ft_putchar_fd;

	};
	void	*array[31];
}	fts;

typedef union
{
	struct
	{
		void	*ft_isalpha_get_suite;
		void	*ft_isdigit_get_suite;
		void	*ft_isalnum_get_suite;
		void	*ft_isascii_get_suite;
		void	*ft_isprint_get_suite;
		void	*ft_strlen_get_suite;
		void	*ft_memset_get_suite;
		void	*ft_bzero_get_suite;
		void	*ft_memcpy_get_suite;
		void	*ft_memmove_get_suite;
		void	*ft_strlcpy_get_suite;
		void	*ft_strlcat_get_suite;
		void	*ft_toupper_get_suite;
		void	*ft_tolower_get_suite;
		void	*ft_strchr_get_suite;
		void	*ft_strrchr_get_suite;
		void	*ft_strncmp_get_suite;
		void	*ft_memchr_get_suite;
		void	*ft_memcmp_get_suite;
		void	*ft_strnstr_get_suite;
		void	*ft_atoi_get_suite;
		void	*ft_calloc_get_suite;
		void	*ft_strdup_get_suite;
		void	*ft_substr_get_suite;
		void	*ft_strjoin_get_suite;
		void	*ft_strtrim_get_suite;
		void	*ft_split_get_suite;
		void	*ft_itoa_get_suite;
		void	*ft_strmapi_get_suite;
		void	*ft_striteri_get_suite;
		void	*ft_putchar_fd_get_suite;

	};
	void	*array[31];
}	test_fts;

#endif

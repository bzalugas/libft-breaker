/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:14:04 by bazaluga          #+#    #+#             */
/*   Updated: 2023/12/01 18:04:49 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/lftest.h"

int			g_exit_code;
pid_t		g_pid;
/* int			g_malloc_fail; */
/* size_t		g_last_malloc_size; */
t_ft		fcts[31];
int			g_n_tests_fun;
print_buff	buff;
int			g_in_fun;

void	add_color_buff(char c)
{
	buff.color = c;
}

void	printbuff()
{
	char	*color;

	if (buff.txt[0])
	{
		color = buff.color == 'r' ? ANSI_COLOR_RED : ANSI_COLOR_GREEN;
		printf("%s%s%s", color, buff.txt, ANSI_COLOR_RESET);
		buff.txt[0] = '\0';
		buff.color = '\0';
	}
}

void	*init_fcts()
{
	void	*handle = dlopen("./libft.so", RTLD_LAZY);
	if (!handle)
	{
		perror("Error while loading libft.so\n");
		exit(EXIT_FAILURE);
	}
	fcts[0] = (t_ft){"ft_isalpha", dlsym(handle, "ft_isalpha"), ft_isalpha_get_suite};
	fcts[1] = (t_ft){"ft_isdigit", dlsym(handle, "ft_isdigit"), ft_isdigit_get_suite};
	fcts[2] = (t_ft){"ft_isalnum", dlsym(handle, "ft_isalnum"), ft_isalnum_get_suite};
	fcts[3] = (t_ft){"ft_isascii", dlsym(handle, "ft_isascii"), ft_isascii_get_suite};
	fcts[4] = (t_ft){"ft_isprint", dlsym(handle, "ft_isprint"), ft_isprint_get_suite};
	fcts[5] = (t_ft){"ft_strlen", dlsym(handle, "ft_strlen"), ft_strlen_get_suite};
	fcts[6] = (t_ft){"ft_memset", dlsym(handle, "ft_memset"), ft_memset_get_suite};
	fcts[7] = (t_ft){"ft_bzero", dlsym(handle, "ft_bzero"), ft_bzero_get_suite};
	fcts[8] = (t_ft){"ft_memcpy", dlsym(handle, "ft_memcpy"), ft_memcpy_get_suite};
	fcts[9] = (t_ft){"ft_memmove", dlsym(handle, "ft_memmove"), ft_memmove_get_suite};
	fcts[10] = (t_ft){"ft_strlcpy", dlsym(handle, "ft_strlcpy"), ft_strlcpy_get_suite};
	fcts[11] = (t_ft){"ft_strlcat", dlsym(handle, "ft_strlcat"), ft_strlcat_get_suite};
	fcts[12] = (t_ft){"ft_toupper", dlsym(handle, "ft_toupper"), ft_toupper_get_suite};
	fcts[13] = (t_ft){"ft_tolower", dlsym(handle, "ft_tolower"), ft_tolower_get_suite};
	fcts[14] = (t_ft){"ft_strchr", dlsym(handle, "ft_strchr"), ft_strchr_get_suite};
	fcts[15] = (t_ft){"ft_strrchr", dlsym(handle, "ft_strrchr"), ft_strrchr_get_suite};
	fcts[16] = (t_ft){"ft_strncmp", dlsym(handle, "ft_strncmp"), ft_strncmp_get_suite};
	fcts[17] = (t_ft){"ft_memchr", dlsym(handle, "ft_memchr"), ft_memchr_get_suite};
	fcts[18] = (t_ft){"ft_memcmp", dlsym(handle, "ft_memcmp"), ft_memcmp_get_suite};
	fcts[19] = (t_ft){"ft_strnstr", dlsym(handle, "ft_strnstr"), ft_strnstr_get_suite};
	fcts[20] = (t_ft){"ft_atoi", dlsym(handle, "ft_atoi"), ft_atoi_get_suite};
	fcts[21] = (t_ft){"ft_calloc", dlsym(handle, "ft_calloc"), ft_calloc_get_suite};
	fcts[22] = (t_ft){"ft_strdup", dlsym(handle, "ft_strdup"), ft_strdup_get_suite};
	fcts[23] = (t_ft){"ft_substr", dlsym(handle, "ft_substr"), ft_substr_get_suite};
	fcts[24] = (t_ft){"ft_strjoin", dlsym(handle, "ft_strjoin"), ft_strjoin_get_suite};
	fcts[25] = (t_ft){"ft_strtrim", dlsym(handle, "ft_strtrim"), ft_strtrim_get_suite};
	fcts[26] = (t_ft){"ft_split", dlsym(handle, "ft_split"), ft_split_get_suite};
	fcts[27] = (t_ft){"ft_itoa", dlsym(handle, "ft_itoa"), ft_itoa_get_suite};
	fcts[28] = (t_ft){"ft_strmapi", dlsym(handle, "ft_strmapi"), ft_strmapi_get_suite};
	fcts[29] = (t_ft){"ft_striteri", dlsym(handle, "ft_striteri"), ft_striteri_get_suite};
	fcts[30] = (t_ft){NULL, NULL, NULL};
	/* fcts[30] = (t_ft){"ft_putchar_fd", dlsym(handle, "ft_putchar_fd"), ft_putchar_fd_get_suite}; */
	return (handle);
}


void	*get_fun(char *name)
{
	if (!name)
		return (NULL);
	for (int i = 0; fcts[i].fun_name; i++)
	{
		if (!strcmp(name, fcts[i].fun_name))
			return (fcts[i].fun);
	}
	return (NULL);
}

void	*get_test_fun(char *name)
{
	if (!name)
		return (NULL);
	for (int i = 0; fcts[i].fun_name; i++)
	{
		if (!strcmp(name, fcts[i].fun_name))
			return (fcts[i].test_fun);
	}
	return (NULL);
}

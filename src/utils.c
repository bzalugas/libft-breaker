/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:14:04 by bazaluga          #+#    #+#             */
/*   Updated: 2024/05/13 21:18:44 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/lftest.h"

int			g_exit_code;
pid_t		g_pid;
t_ft		fcts[N_TESTS_FUN];
print_buff	buff;
int			g_in_fun;
int			fds[2];
char		pipe_buff[BUFFSIZE];

void	manage_outputs(int to_close)
{
	static int	stdout = -1;
	static int	stderr = -1;

	if (to_close)
	{
		stdout = dup(STDOUT_FILENO);
		stderr = dup(STDERR_FILENO);
		close(STDOUT_FILENO);
		close(STDERR_FILENO);
	}
	else if (stdout != -1 && stderr != -1)
	{
		dup2(stdout, STDOUT_FILENO);
		dup2(stderr, STDERR_FILENO);
		close(stdout);
		close(stderr);
	}
}

void	manage_pipes(int to_open, int to_close)
{
	if (to_open)
	{
		if (pipe(fds) == -1)
		{
			perror("Pipe error.");
			exit(EXIT_FAILURE);
		}
	}
	else if (to_close)
	{
		close(fds[1]);
		fds[1] = -1;
		read(fds[0], &pipe_buff, BUFFSIZE);
		close(fds[0]);
		fds[0] = -1;
	}
}

void	add_color_buff(char c)
{
	buff.color = c;
}

void	printbuff()
{
	char	*color;

	if (buff.txt[0])
	{
		color = buff.color == 'r' ? RED : GREEN;
		if (buff.color == '!')
			color = BOF;
		printf("%s%s%s", color, buff.txt, WHITE);
		buff.txt[0] = '\0';
		buff.color = '\0';
	}
}

void	*init_fcts()
{
	void	*handle = dlopen("obj/libft.so", RTLD_LAZY);
	if (!handle)
	{
		perror("Error while loading libft.so");
		exit(EXIT_FAILURE);
	}

	/* PART 1 */
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

	/* PART 2 */
	fcts[23] = (t_ft){"ft_substr", dlsym(handle, "ft_substr"), ft_substr_get_suite};
	fcts[24] = (t_ft){"ft_strjoin", dlsym(handle, "ft_strjoin"), ft_strjoin_get_suite};
	fcts[25] = (t_ft){"ft_strtrim", dlsym(handle, "ft_strtrim"), ft_strtrim_get_suite};
	fcts[26] = (t_ft){"ft_split", dlsym(handle, "ft_split"), ft_split_get_suite};
	fcts[27] = (t_ft){"ft_itoa", dlsym(handle, "ft_itoa"), ft_itoa_get_suite};
	fcts[28] = (t_ft){"ft_strmapi", dlsym(handle, "ft_strmapi"), ft_strmapi_get_suite};
	fcts[29] = (t_ft){"ft_striteri", dlsym(handle, "ft_striteri"), ft_striteri_get_suite};
	fcts[30] = (t_ft){"ft_putchar_fd", dlsym(handle, "ft_putchar_fd"), ft_putchar_fd_get_suite};
	fcts[31] = (t_ft){"ft_putstr_fd", dlsym(handle, "ft_putstr_fd"), ft_putstr_fd_get_suite};
	fcts[32] = (t_ft){"ft_putendl_fd", dlsym(handle, "ft_putendl_fd"), ft_putendl_fd_get_suite};
	fcts[33] = (t_ft){"ft_putnbr_fd", dlsym(handle, "ft_putnbr_fd"), ft_putnbr_fd_get_suite};

	/* BONUS PART */
	fcts[34] = (t_ft){"ft_lstnew", dlsym(handle, "ft_lstnew"), ft_lstnew_get_suite};
	fcts[35] = (t_ft){"ft_lstadd_front", dlsym(handle, "ft_lstadd_front"), ft_lstadd_front_get_suite};
	fcts[36] = (t_ft){"ft_lstsize", dlsym(handle, "ft_lstsize"), ft_lstsize_get_suite};
	fcts[37] = (t_ft){"ft_lstlast", dlsym(handle, "ft_lstlast"), ft_lstlast_get_suite};
	fcts[38] = (t_ft){"ft_lstadd_back", dlsym(handle, "ft_lstadd_back"), ft_lstadd_back_get_suite};
	fcts[39] = (t_ft){"ft_lstdelone", dlsym(handle, "ft_lstdelone"), ft_lstdelone_get_suite};
	fcts[40] = (t_ft){"ft_lstclear", dlsym(handle, "ft_lstclear"), ft_lstclear_get_suite};
	fcts[41] = (t_ft){"ft_lstiter", dlsym(handle, "ft_lstiter"), ft_lstiter_get_suite};
	fcts[42] = (t_ft){"ft_lstmap", dlsym(handle, "ft_lstmap"), ft_lstmap_get_suite};

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

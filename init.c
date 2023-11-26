/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 05:22:20 by bazaluga          #+#    #+#             */
/*   Updated: 2023/11/26 05:46:17 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lftest.h"

t_ft	fcts[31];

void	init_fcts(void)
{
	fcts[0] = (t_ft){"ft_isalpha", dlsym(RTLD_DEFAULT, "ft_isalpha"), ft_isalpha_get_suite()};
	fcts[1] = (t_ft){"ft_isdigit", dlsym(RTLD_DEFAULT, "ft_isdigit"), ft_isdigit_get_suite()};
	fcts[2] = (t_ft){"ft_isalnum", dlsym(RTLD_DEFAULT, "ft_isalnum"), ft_isalnum_get_suite()};
	fcts[3] = (t_ft){"ft_isascii", dlsym(RTLD_DEFAULT, "ft_isascii"), ft_isascii_get_suite()};
	fcts[4] = (t_ft){"ft_isprint", dlsym(RTLD_DEFAULT, "ft_isprint"), ft_isprint_get_suite()};
	fcts[5] = (t_ft){"ft_strlen", dlsym(RTLD_DEFAULT, "ft_strlen"), ft_strlen_get_suite()};
	fcts[6] = (t_ft){"ft_memset", dlsym(RTLD_DEFAULT, "ft_memset"), ft_memset_get_suite()};
	fcts[7] = (t_ft){"ft_bzero", dlsym(RTLD_DEFAULT, "ft_bzero"), ft_bzero_get_suite()};
	fcts[8] = (t_ft){"ft_memcpy", dlsym(RTLD_DEFAULT, "ft_memcpy"), ft_memcpy_get_suite()};
	fcts[9] = (t_ft){"ft_memmove", dlsym(RTLD_DEFAULT, "ft_memmove"), ft_memmove_get_suite()};
	fcts[10] = (t_ft){"ft_strlcpy", dlsym(RTLD_DEFAULT, "ft_strlcpy"), ft_strlcpy_get_suite()};
	fcts[11] = (t_ft){"ft_strlcat", dlsym(RTLD_DEFAULT, "ft_strlcat"), ft_strlcat_get_suite()};
	fcts[12] = (t_ft){"ft_toupper", dlsym(RTLD_DEFAULT, "ft_toupper"), ft_toupper_get_suite()};
	fcts[13] = (t_ft){"ft_tolower", dlsym(RTLD_DEFAULT, "ft_tolower"), ft_tolower_get_suite()};
	fcts[14] = (t_ft){"ft_strchr", dlsym(RTLD_DEFAULT, "ft_strchr"), ft_strchr_get_suite()};
	fcts[15] = (t_ft){"ft_strrchr", dlsym(RTLD_DEFAULT, "ft_strrchr"), ft_strrchr_get_suite()};
	fcts[16] = (t_ft){"ft_strncmp", dlsym(RTLD_DEFAULT, "ft_strncmp"), ft_strncmp_get_suite()};
	fcts[17] = (t_ft){"ft_memchr", dlsym(RTLD_DEFAULT, "ft_memchr"), ft_memchr_get_suite()};
	fcts[18] = (t_ft){"ft_memcmp", dlsym(RTLD_DEFAULT, "ft_memcmp"), ft_memcmp_get_suite()};
	fcts[19] = (t_ft){"ft_strnstr", dlsym(RTLD_DEFAULT, "ft_strnstr"), ft_strnstr_get_suite()};
	fcts[20] = (t_ft){"ft_atoi", dlsym(RTLD_DEFAULT, "ft_atoi"), ft_atoi_get_suite()};
	fcts[21] = (t_ft){"ft_calloc", dlsym(RTLD_DEFAULT, "ft_calloc"), ft_calloc_get_suite()};
	fcts[22] = (t_ft){"ft_strdup", dlsym(RTLD_DEFAULT, "ft_strdup"), ft_strdup_get_suite()};
	fcts[23] = (t_ft){"ft_substr", dlsym(RTLD_DEFAULT, "ft_substr"), ft_substr_get_suite()};
	fcts[24] = (t_ft){"ft_strjoin", dlsym(RTLD_DEFAULT, "ft_strjoin"), ft_strjoin_get_suite()};
	fcts[25] = (t_ft){"ft_strtrim", dlsym(RTLD_DEFAULT, "ft_strtrim"), ft_strtrim_get_suite()};
	fcts[26] = (t_ft){NULL, NULL, NULL};
	fcts[27] = (t_ft){NULL, NULL, NULL};
	fcts[28] = (t_ft){NULL, NULL, NULL};
	fcts[29] = (t_ft){NULL, NULL, NULL};
	fcts[30] = (t_ft){NULL, NULL, NULL};
	/* fcts[26] = (t_ft){"ft_split", dlsym(RTLD_DEFAULT, "ft_split"), ft_split_get_suite()}; */
	/* fcts[27] = (t_ft){"ft_itoa", dlsym(RTLD_DEFAULT, "ft_itoa"), ft_itoa_get_suite()}; */
	/* fcts[28] = (t_ft){"ft_strmapi", dlsym(RTLD_DEFAULT, "ft_strmapi"), ft_strmapi_get_suite()}; */
	/* fcts[29] = (t_ft){"ft_striteri", dlsym(RTLD_DEFAULT, "ft_striteri"), ft_striteri_get_suite()}; */
	/* fcts[30] = (t_ft){"ft_putchar_fd", dlsym(RTLD_DEFAULT, "ft_putchar_fd"), ft_putchar_fd_get_suite()}; */

}

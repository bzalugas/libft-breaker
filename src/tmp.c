#include "../includes/lftest.h"
#include <limits.h>

/* void	*ft_calloc(size_t nmemb, size_t size) */
/* { */
/* 	unsigned char	*ptr; */
/* 	size_t			i; */

/* 	printf("malloc addr = %p\n", malloc); */
/* 	if (size > 0 && nmemb > ULONG_MAX / size) */
/* 		return (NULL); */
/* 	ptr = (unsigned char *)malloc(nmemb * size); */
/* 	if (!ptr) */
/* 		return (NULL); */
/* 	i = 0; */
/* 	while (i < nmemb * size) */
/* 	{ */
/* 		ptr[i] = '\0'; */
/* 		i++; */
/* 	} */
/* 	return ((void *)ptr); */
/* } */

int	main(void)
{
	void	*(*ft_calloc)(size_t, size_t);
	void	*handle = dlopen("libft.so", RTLD_LAZY);
	ft_calloc = dlsym(handle, "ft_calloc");
	if (!ft_calloc)
		exit(EXIT_FAILURE);
	free(ft_calloc(5, sizeof(char)));
	printf("tmp malloc addr = %p\n", malloc);
	/* printf("%lu\n", g_last_malloc_size); */
	free(ft_calloc(8, sizeof(char)));
	/* printf("%lu\n", g_last_malloc_size); */
	/* dlclose(handle); */
	free(malloc(sizeof(int) * 2));
	free(malloc(sizeof(int) * 3));
	/* printf("%lu\n", g_last_malloc_size); */
	return (0);
}

#include "lftest.h"
#include <limits.h>

/* size_t	g_last_malloc_size; */
/* int		g_malloc_fail; */

int	test_fun(int x)
{
	return (x * 2);
}

int	main(void)
{
	void	*(*ft_calloc)(size_t, size_t);
	void	*handle = dlopen("libft.so", RTLD_LAZY);
	ft_calloc = dlsym(handle, "ft_calloc");
	free(ft_calloc(5, sizeof(char)));
	printf("tmp malloc addr = %p\n", malloc);
	/* printf("%lu\n", g_last_malloc_size); */
	free(ft_calloc(8, sizeof(char)));
	/* printf("%lu\n", g_last_malloc_size); */
	dlclose(handle);
	free(malloc(sizeof(int) * 2));
	free(malloc(sizeof(int) * 3));
	/* printf("%lu\n", g_last_malloc_size); */
	return (0);
}

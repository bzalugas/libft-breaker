#include "lftest.h"
#include <limits.h>

extern size_t	g_last_malloc_size;
extern int		g_malloc_fail;

int	test_fun(int x)
{
	return (x * 2);
}

int	main(void)
{
	char	name[] = "test_fun";
	void	*lib = dlopen("./tmp.so", RTLD_LAZY);
	if (!lib)
		exit(EXIT_FAILURE);
	int (*f)(int) = dlsym(lib, name);
	if (f)
		printf("%d\n", f(2));
	else
		printf("NOT FOUND\n");
	dlclose(lib);
	return (0);
}

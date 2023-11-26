#include "lftest.h"
#include <limits.h>

extern size_t	g_last_malloc_size;
extern int		g_malloc_fail;

int	main(void)
{
	void	*handle = dlopen("./libft.so", RTLD_LAZY);
	if (!handle)
		return 1;
	void *tmp = dlsym(handle, "ft_isalpha");
	int	(*f)(int) = tmp;
	if (f)
	{
		printf("HERE\n");
		printf("res = %d\n", f('h'));
	}
	else
		printf("NOT HERE\n");
	dlclose(handle);
	return (0);
}

#include "lftest.h"

int		g_exit_code;
pid_t	g_pid;
int		g_malloc_fail;
size_t	g_last_malloc_size;

int	main(void)
{
	FAIL_MALLOC;
	void	*ptr = malloc(0);
	printf("%p\n", ptr);
	free(ptr);
	ptr = calloc(12297829382473034410U,2);
	printf("%p\n", ptr);
	free(ptr);

	ptr = malloc(18446744073709551614U);
	printf("%p\n", ptr);
	free(ptr);
	size_t res = 18446744073709551615U;
	printf("%lu\n", res);
	return (0);
}

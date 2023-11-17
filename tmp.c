#include "lftest.h"
#include <limits.h>
int		g_exit_code;
pid_t	g_pid;
int		g_malloc_fail;
size_t	g_last_malloc_size;

int	main(void)
{
	size_t	count;
	size_t	size;
	count = 0;
	size = 1;
	/* FAIL_MALLOC; */
	int *s = NULL;
	s = (int *)ft_calloc(count, size);
	printf("s = %p\nlast malloc size = %lu\n", s, g_last_malloc_size);
	free(s);
	return (0);
}

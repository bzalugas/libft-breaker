#include "lftest.h"
#include <limits.h>
int		g_exit_code;
pid_t	g_pid;
extern int		g_malloc_fail;
extern size_t	g_last_malloc_size;

int	main(void)
{
	size_t	count;
	size_t	size;
	count = 5;
	size = 1;
	/* FAIL_MALLOC; */
	char *s = NULL;
	s = (char *)ft_calloc(count, size);
	printf("s = %p\nlast malloc size = %lu\n", s, g_last_malloc_size);
	free(s);
	return (0);
}

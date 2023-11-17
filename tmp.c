#include "lftest.h"
#include <limits.h>

extern size_t	g_last_malloc_size;
extern int		g_malloc_fail;

int	main(void)
{
	size_t	count;
	size_t	size;
	count = 1;
	size = 1;
	FAIL_MALLOC;
	int *s = NULL;
	s = (int *)ft_calloc(count, size);
	printf("s = %p\nlast malloc size = %lu\n", s, g_last_malloc_size);
	/* printf("s = %p\n", s); */
	free(s);
	return (0);
}

#include "lftest.h"
#include <limits.h>

extern size_t	g_last_malloc_size;
extern int		g_malloc_fail;

int	main(void)
{
	char *s = "abcde";
	FAIL_MALLOC;
	char *s2 = strdup(s);
	printf("%p, %s\n", s2, s2);
	return (0);
}

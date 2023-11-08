#include "lftest.h"
#include <bsd/string.h>
int	main(void)
{
	/* char	mem[BUFFSIZE]; */
	char	*src = NULL;
	char	*dst = NULL;
	size_t	n = 3;

	/* memset(dst, '\0', 24); */
	/* strcpy(src, "Bonjour a tous"); */
	printf("s = %p, d = %p\n", src, dst);
	printf("s = %s (%lu), d = %s (%lu)\n", src, strlen(src), dst, strlen(dst));
	size_t res = strlcpy(dst, src, n);
	printf("src = %s (%lu), dst = %s (%lu), n = %lu\nres = %lu\n\n", src, strlen(src), dst, strlen(dst), n, res);
	printf("dst = %s\n", dst);
	printf("re dst = ");
	for (int i = 0; i < BUFFSIZE; i++)
		printf("%c", (dst[i] < 32 || dst[i] > 126 ? '.' : dst[i]));
	printf("\n");
	return (0);
}

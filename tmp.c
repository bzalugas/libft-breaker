#include "lftest.h"
#include <bsd/string.h>
int	main(void)
{
	char	dst[BUFFSIZE];
	char	src[BUFFSIZE] = "montest\0blabla";
	size_t	n = 18;

	bzero(dst, BUFFSIZE);
	size_t res = strlcpy(dst, src, n);
	printf("src = %s, dst = %s, n = %lu\nres = %lu\n\n", src, dst, n, res);
	for (int i = 0; i < BUFFSIZE; i++)
		printf("%c", dst[i]);
	printf("\n");
	return (0);
}

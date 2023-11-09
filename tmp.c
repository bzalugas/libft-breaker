#include "lftest.h"
#include <bsd/string.h>
int	main(void)
{
	char	mem[BUFFSIZE];
	char	*dst = &mem[0];
	char	*src = &mem[5];
	size_t	size;
	size_t	res;

	/* bzero(mem, BUFFSIZE); */
	memset(mem, 'x', BUFFSIZE);
	memset(src, 'a', BUFFSIZE - 1);
	/* src[24] = '\0'; */
	size = 180;
	printf("mem: ");
	for (int i = 0; i < BUFFSIZE + 10; i++)
		printf("%c", mem[i] < 32 || mem[i] > 126 ? '.' : mem[i]);
	printf("\n");
	res = strlcpy(dst, src, size);
	printf("res = %lu\n", res);
	printf("mem: ");
	for (int i = 0; i < BUFFSIZE + 10; i++)
		printf("%c", mem[i] < 32 || mem[i] > 126 ? '.' : mem[i]);
	printf("\n");
	return (0);
}

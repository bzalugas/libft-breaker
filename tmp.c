#include "lftest.h"
#include <limits.h>
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
	/* ptr = calloc(18719476734,1); */
	size_t nmemb = 0x4D44B6918;
	size_t size = 1;
	printf("%lu\n", sizeof(17179869180U));
	printf("INT_MAX = %d, UINT_MAX = %u\n", INT_MAX, UINT_MAX);
	printf("nmemb = %lu, size = %lu\n", nmemb, size);
	printf("nmemb * size > INT_MAX : %d\n", nmemb > INT_MAX / size);
	ptr = calloc(nmemb, size);
	printf("%p\n", ptr);
	free(ptr);
	ptr = NULL;
	ptr = malloc(nmemb * size);
	printf("%p\n", ptr);
	free(ptr);
	size_t res = 18446744073709551615U;
	printf("%lu\n", res);
	return (0);
	/* 10001011011000001010100000 */
}

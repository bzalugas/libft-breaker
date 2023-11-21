#include "lftest.h"
#include <limits.h>

extern size_t	g_last_malloc_size;
extern int		g_malloc_fail;

int	main(void)
{
	int c = 'a'; //00000000 00000000 00000000 01100001
	unsigned long long c2;//00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000
	printf("char = %lu, int = %lu, unsigned int = %lu, unsigned long long = %lu\n", sizeof(char),sizeof(int), sizeof(unsigned int), sizeof(unsigned long long));
	printf("c = <%c>, <%d>, <%llu>\n", c, c, (unsigned long long)c);
	c2 = (unsigned char)c;	//00000000 00000000 00000000 00000000 00000000 00000000 00000000 01100001
	c2 = c2 | c2 << 8;		//00000000 00000000 00000000 00000000 00000000 00000000 01100001 01100001
	c2 |= c2 << 16;			//00000000 00000000 00000000 00000000 01100001 01100001 01100001 01100001
	c2 |= c2 << 32;			//01100001 01100001 01100001 01100001 01100001 01100001 01100001 01100001
	unsigned long long c3 = (unsigned char)c;
	c3 |= ((c3 << 8) << 16) << 32;
	printf("c2 = <%c>, <%llu>\n", (unsigned char)c2, c2);
	printf("c3 = <%c>, <%llu>\n", (unsigned char)c3, c3);
	/* size_t		size = 23; */
	/* char		b1[BUFFSIZE]; */
	/* char		b2[BUFFSIZE]; */
	/* void		*res = (void*)0x23; */

	/* memset(b1, 'b', BUFFSIZE); */
	/* memset(b2, 'b', BUFFSIZE); */
	/* printf("%s: s = %s, c = %d, n = %lu\n", __func__,b2, 'A', size); */
	/* memset(b1, 'z', size); */
	/* res = ft_memset(b2, 'z', size); */
	/* for (int i = 0; i < 30; i++) */
	/* 	printf("%c", ((char *)res)[i]); */
	/* printf("\n"); */

	return (0);
}

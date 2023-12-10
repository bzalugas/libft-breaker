/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   staticAllTests.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:31:06 by bazaluga          #+#    #+#             */
/*   Updated: 2023/12/10 23:28:21 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lftest.h"

/*********************************** PART 1 ***********************************/

/****************************/
/*        FT_ISALPHA        */
/****************************/

void	test_ft_isalpha_basic(CuTest *tc)
{
	int		(*ft_isalpha)(int) = get_fun("ft_isalpha");
	char	c;

	printf("\n########## FT_ISALPHA ##########\n");
	sprintf(buff.txt, "ft_isalpha: Basic inputs (-128 => 127)\n");
	c = -128;
	while (c < 127)
	{
		CuAssertIntEquals(tc, isalpha(c) > 0, ft_isalpha(c) > 0);
		c++;
	}
	CuAssertIntEquals(tc, isalpha(c) > 0, ft_isalpha(c) > 0);
}

CuSuite	*ft_isalpha_get_suite()
{
	CuSuite	*suite = CuSuiteNew();
	SUITE_ADD_TEST(suite, test_ft_isalpha_basic);
	return (suite);
}

void	run_test_ft_isalpha(void)
{
	CuString	*output = CuStringNew();
	CuSuite		*suite = CuSuiteNew();

	CuSuiteAddSuite(suite, ft_isalpha_get_suite());

	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("ft_isalpha: %s\n", output->buffer);
}

/****************************/
/*        FT_ISDIGIT        */
/****************************/

void	test_ft_isdigit_basic(CuTest *tc)
{
	int		(*ft_isdigit)(int) = get_fun("ft_isdigit");
	char	c;

	printf("\n########## FT_ISDIGIT ##########\n");
	sprintf(buff.txt, "ft_isdigit: Basic inputs (-128 => 127)\n");
	c = -128;
	while (c < 127)
	{
		CuAssertIntEquals(tc, isdigit(c) > 0, ft_isdigit(c) > 0);
		c++;
	}
	CuAssertIntEquals(tc, isdigit(c) > 0, ft_isdigit(c) > 0);
}

CuSuite	*ft_isdigit_get_suite()
{
	CuSuite	*suite = CuSuiteNew();
	SUITE_ADD_TEST(suite, test_ft_isdigit_basic);
	return (suite);
}

void	run_test_ft_isdigit(void)
{
	CuString	*output = CuStringNew();
	CuSuite		*suite = CuSuiteNew();

	CuSuiteAddSuite(suite, ft_isdigit_get_suite());

	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("ft_isdigit: %s\n", output->buffer);
}

/****************************/
/*        FT_ISALNUM        */
/****************************/

void	test_ft_isalnum_basic(CuTest *tc)
{
	int		(*ft_isalnum)(int) = get_fun("ft_isalnum");
	char	c;

	printf("\n########## FT_ISALNUM ##########\n");
	sprintf(buff.txt, "ft_isalnum: Basic inputs (-128 => 127)\n");
	c = -128;
	while (c < 127)
	{
		CuAssertIntEquals(tc, isalnum(c) > 0, ft_isalnum(c) > 0);
		c++;
	}
	CuAssertIntEquals(tc, isalnum(c) > 0, ft_isalnum(c) > 0);
}

CuSuite	*ft_isalnum_get_suite()
{
	CuSuite	*suite = CuSuiteNew();
	SUITE_ADD_TEST(suite, test_ft_isalnum_basic);
	return (suite);
}

void	run_test_ft_isalnum(void)
{
	CuString	*output = CuStringNew();
	CuSuite		*suite = CuSuiteNew();

	CuSuiteAddSuite(suite, ft_isalnum_get_suite());

	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("ft_isalnum: %s\n", output->buffer);
}

/****************************/
/*        FT_ISASCII        */
/****************************/

void	test_ft_isascii_basic(CuTest *tc)
{
	int		(*ft_isascii)(int) = get_fun("ft_isascii");
	char	c;

	printf("\n########## FT_ISASCII ##########\n");
	sprintf(buff.txt, "ft_isascii: Normal inputs (-128 => 127)\n");
	c = -128;
	while (c < 127)
	{
		CuAssertIntEquals(tc, isascii(c) > 0, ft_isascii(c) > 0);
		c++;
	}
	CuAssertIntEquals(tc, isascii(c) > 0, ft_isascii(c) > 0);
}

CuSuite	*ft_isascii_get_suite()
{
	CuSuite	*suite = CuSuiteNew();
	SUITE_ADD_TEST(suite, test_ft_isascii_basic);
	return (suite);
}

void	run_test_ft_isascii(void)
{
	CuString	*output = CuStringNew();
	CuSuite		*suite = CuSuiteNew();

	CuSuiteAddSuite(suite, ft_isascii_get_suite());

	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("ft_isascii: %s\n", output->buffer);
}

/****************************/
/*        FT_ISPRINT        */
/****************************/

void	test_ft_isprint_basic(CuTest *tc)
{
	int		(*ft_isprint)(int) = get_fun("ft_isprint");
	char	c;

	printf("\n########## FT_ISPRINT ##########\n");
	sprintf(buff.txt, "ft_isprint: Normal inputs (-128 => 127)\n");
	c = -128;
	while (c < 127)
	{
		CuAssertIntEquals(tc, isprint(c) > 0, ft_isprint(c) > 0);
		c++;
	}
	CuAssertIntEquals(tc, isprint(c) > 0, ft_isprint(c) > 0);
}

CuSuite	*ft_isprint_get_suite()
{
	CuSuite	*suite = CuSuiteNew();
	SUITE_ADD_TEST(suite, test_ft_isprint_basic);
	return (suite);
}

void	run_test_ft_isprint(void)
{
	CuString	*output = CuStringNew();
	CuSuite		*suite = CuSuiteNew();

	CuSuiteAddSuite(suite, ft_isprint_get_suite());

	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("ft_isprint: %s\n", output->buffer);
}

/****************************/
/*        FT_STRLEN         */
/****************************/

void	test_ft_strlen_basic(CuTest *tc)
{
	size_t		(*ft_strlen)(char *) = get_fun("ft_strlen");
	char	*s;
	int		res1;
	int		res2;
	int		fd[2];

	s = strdup("Bonjour a tous !");
	printf("\n########### FT_STRLEN ##########\n");
	sprintf(buff.txt, "%s: input <%s>\n", __func__,s);
	//not necessary use of pipe but it's to remember
	if (pipe(fd) == -1)
		exit(1);
	SANDBOX(
		close(fd[0]);
		res1 = strlen(s);
		write(fd[1], &res1, sizeof(int));
		close(fd[1]);
		);
	read(fd[0], &res1, sizeof(int));
	SANDBOX(
		close(fd[0]);
		res2 = ft_strlen(s);
		write(fd[1], &res2, sizeof(int));
		close(fd[1]);
		);
	close(fd[1]);
	read(fd[0], &res2, sizeof(int));
	close(fd[0]);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strlen_null(CuTest *tc)
{
	size_t		(*ft_strlen)(char *) = get_fun("ft_strlen");
	char		*s;

	s = NULL;
	sprintf(buff.txt, "%s: input <%s>\n", __func__, s);
	SANDBOX(ft_strlen(s););
	CuAssert(tc, "ft_strlen doen't crash when it should.", WIFSIGNALED(g_exit_code));
}

CuSuite	*ft_strlen_get_suite()
{
	CuSuite	*suite = CuSuiteNew();
	SUITE_ADD_TEST(suite, test_ft_strlen_basic);
	SUITE_ADD_TEST(suite, test_ft_strlen_null);
	return (suite);
}

void	run_test_ft_strlen(void)
{
	CuString	*output = CuStringNew();
	CuSuite		*suite = CuSuiteNew();

	CuSuiteAddSuite(suite, ft_strlen_get_suite());

	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("ft_strlen: %s\n", output->buffer);
}

/****************************/
/*        FT_MEMSET         */
/****************************/

void	test_ft_memset_basic(CuTest *tc)
{
	void		*(*ft_memset)(void *, int, size_t) = get_fun("ft_memset");
	size_t		size = 23;
	char		b1[BUFFSIZE];
	char		b2[BUFFSIZE];
	void		*res = (void*)0x23;

	memset(b1, 'b', BUFFSIZE);
	memset(b2, 'b', BUFFSIZE);
	b1[BUFFSIZE - 1] = 0;
	b2[BUFFSIZE - 1] = 0;
	printf("\n########### FT_MEMSET ##########\n");
	sprintf(buff.txt, "%s: s=<%s>, c=<%d>, n=<%lu>\n", __func__,b2, 'A', size);
	memset(b1, 'z', size);
	SANDBOX(ft_memset(b2, 'z', size););
	CuAssert(tc, "ft_memset crash when it souldn't.", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	res = ft_memset(b2, 'z', size);
	CuAssertPtrEquals_Msg(tc, "Bad return adress", b2, res);
	CuAssertStrEquals_Msg(tc, "Results differents", b1, b2);

}

void	test_ft_memset_cut_string(CuTest *tc)
{
	void		*(*ft_memset)(void *, int, size_t) = get_fun("ft_memset");
	size_t		size = 23;
	char		b1[BUFFSIZE];
	char		b2[BUFFSIZE];
	void		*res = (void*)0x23;

	memset(b1, 'b', BUFFSIZE);
	memset(b2, 'b', BUFFSIZE);
	b1[BUFFSIZE - 1] = 0;
	b2[BUFFSIZE - 1] = 0;
	b1[5] = '\0';
	b2[5] = '\0';
	sprintf(buff.txt, "%s: s=<%s>, c=<%d>, n=<%lu>\n", __func__,b2, 'A', size);
	memset(b1, 'A', size);
	SANDBOX(res = ft_memset(b2, 'A', size););
	CuAssert(tc, "ft_memset crash when it souldn't.", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	res = ft_memset(b2, 'A', size);
	CuAssertPtrEquals_Msg(tc, "Bad return adress", b2, res);
	CuAssert(tc, "ft_memset doesn't work if string is cut", !memcmp(b1, b2, BUFFSIZE));
}

void	test_ft_memset_not_char(CuTest *tc)
{
	void		*(*ft_memset)(void *, int, size_t) = get_fun("ft_memset");
	size_t	size = 23;
	char	b1[BUFFSIZE];
	char	b2[BUFFSIZE];
	void	*res = (void*)0x23;

	memset(b1, 'b', BUFFSIZE);
	memset(b2, 'b', BUFFSIZE);
	b1[BUFFSIZE - 1] = 0;
	b2[BUFFSIZE - 1] = 0;
	sprintf(buff.txt, "%s: s=<%s>, c=<%d>, n=<%lu>\n", __func__,b2, '\200', size);
	memset(b1, '\200', size);
	SANDBOX(res = ft_memset(b2, '\200', size););
	CuAssert(tc, "ft_memset crash when it souldn't.", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	res = ft_memset(b2, '\200', size);
	CuAssertPtrEquals_Msg(tc, "Bad return adress", b2, res);
	CuAssertStrEquals_Msg(tc, "ft_memset doesn't cast to unsigned char", b1, b2);
}

void	test_ft_memset_same_return(CuTest *tc)
{
	void		*(*ft_memset)(void *, int, size_t) = get_fun("ft_memset");
	size_t	size = 23;
	char	b1[BUFFSIZE];
	char	tmp[BUFFSIZE];
	void	*res1 = (void*)0x23;
	void	*res2 = (void*)0x23;

	memset(b1, 'b', BUFFSIZE);
	b1[BUFFSIZE - 1] = 0;
	sprintf(buff.txt, "%s: s=<%s>, c=<%d>, n=<%lu>\n", __func__,b1, 'z', size);
	res1 = memset(b1, 'z', size);
	strncpy(tmp, b1, BUFFSIZE);
	memset(b1, 'b', BUFFSIZE);
	b1[BUFFSIZE - 1] = 0;
	SANDBOX(res2 = ft_memset(b1, 'z', size););
	CuAssert(tc, "ft_memset crash when it souldn't.", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	res2 = ft_memset(b1, 'z', size);
	CuAssertPtrEquals_Msg(tc, "Bad return adress", res1, res2);
	CuAssertStrEquals_Msg(tc, "Different str modifs", tmp, b1);
}

void	test_ft_memset_size_zero(CuTest *tc)
{
	void		*(*ft_memset)(void *, int, size_t) = get_fun("ft_memset");
	size_t	size = 0;
	char	b1[BUFFSIZE];
	char	b2[BUFFSIZE];
	void	*res = (void*)0x23;

	memset(b1, 'b', BUFFSIZE);
	memset(b2, 'b', BUFFSIZE);
	b1[BUFFSIZE - 1] = 0;
	b2[BUFFSIZE - 1] = 0;
	sprintf(buff.txt, "%s: s=<%s>, c=<%d>, n=<%lu>\n", __func__,b2, 'z', size);
	memset(b1, 'z', size);
	SANDBOX(res = ft_memset(b2, 'z', size););
	CuAssert(tc, "ft_memset crash when it souldn't.", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	res = ft_memset(b2, 'z', size);
	CuAssertPtrEquals_Msg(tc, "Bad return adress", b2, res);
	CuAssertStrEquals_Msg(tc, "ft_memset modify something when size = 0", b1, b2);
}

void	test_ft_memset_null(CuTest *tc)
{
	void		*(*ft_memset)(void *, int, size_t) = get_fun("ft_memset");
	size_t	size = 23;
	char	*b = NULL;

	sprintf(buff.txt, "%s: s=<%s>, c=<%d>, n=<%lu>\n", __func__,b, 'z', size);
	SANDBOX(ft_memset(b, 'z', size););
	CuAssert(tc, "ft_memset doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

CuSuite	*ft_memset_get_suite()
{
	CuSuite	*suite = CuSuiteNew();
	SUITE_ADD_TEST(suite, test_ft_memset_basic);
	SUITE_ADD_TEST(suite, test_ft_memset_cut_string);
	SUITE_ADD_TEST(suite, test_ft_memset_not_char);
	SUITE_ADD_TEST(suite, test_ft_memset_same_return);
	SUITE_ADD_TEST(suite, test_ft_memset_size_zero);
	SUITE_ADD_TEST(suite, test_ft_memset_null);
	return (suite);
}

void	run_test_ft_memset(void)
{
	CuString	*output = CuStringNew();
	CuSuite		*suite = CuSuiteNew();

	CuSuiteAddSuite(suite, ft_memset_get_suite());

	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("ft_memset: %s\n", output->buffer);
}

/****************************/
/*        FT_BZERO          */
/****************************/

void	test_ft_bzero_basic(CuTest *tc)
{
	void	(*ft_bzero)(void *, size_t) = get_fun("ft_bzero");
	size_t	n = 20;
	char	s1[BUFFSIZE];
	char	s2[BUFFSIZE];

	memset(s1, 'A', BUFFSIZE);
	memset(s2, 'A', BUFFSIZE);
	s1[BUFFSIZE - 1] = 0;
	s2[BUFFSIZE - 1] = 0;
	printf("\n########### FT_BZERO ###########\n");
	sprintf(buff.txt, "%s: s = %s, n = %lu\n", __func__,s1, n);
	bzero(s1, n);
	SANDBOX(ft_bzero(s2, n););
	CuAssert(tc, "ft_bzero crash when it shouldn't", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	ft_bzero(s2, n);
	CuAssert(tc, "Results different", !memcmp(s1, s2, BUFFSIZE));
}

void	test_ft_bzero_size_zero(CuTest *tc)
{
	void	(*ft_bzero)(void *, size_t) = get_fun("ft_bzero");
	size_t	n = 0;
	char	s1[BUFFSIZE];
	char	s2[BUFFSIZE];

	memset(s1, 'A', BUFFSIZE);
	memset(s2, 'A', BUFFSIZE);
	s1[BUFFSIZE - 1] = 0;
	s2[BUFFSIZE - 1] = 0;
	sprintf(buff.txt, "%s: s = %s, n = %lu\n", __func__,s1, n);
	SANDBOX(ft_bzero(s2, n););
	CuAssert(tc, "ft_bzero crash when it shouldn't", !WIFSIGNALED(g_exit_code));
	bzero(s1, n);
	ft_bzero(s2, n);
	CuAssert(tc, "ft_bzero change something with size 0", !memcmp(s1, s2, BUFFSIZE));
}


void	test_ft_bzero_null(CuTest *tc)
{
	void	(*ft_bzero)(void *, size_t) = get_fun("ft_bzero");
	size_t	n = BUFFSIZE;
	char	*s1 = NULL;

	sprintf(buff.txt, "%s: s = %s, n = %lu\n", __func__,s1, n);
	SANDBOX(ft_bzero(s1, n););
	CuAssert(tc, "ft_bzero doesn't crash when it should", WIFSIGNALED(g_exit_code));
}

CuSuite	*ft_bzero_get_suite()
{
	CuSuite	*suite = CuSuiteNew();
	SUITE_ADD_TEST(suite, test_ft_bzero_basic);
	SUITE_ADD_TEST(suite, test_ft_bzero_size_zero);
	SUITE_ADD_TEST(suite, test_ft_bzero_null);
	return (suite);
}

void	run_test_ft_bzero(void)
{
	CuString	*output = CuStringNew();
	CuSuite		*suite = CuSuiteNew();

	CuSuiteAddSuite(suite, ft_bzero_get_suite());

	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("ft_bzero: %s\n", output->buffer);
}

/****************************/
/*        FT_MEMCPY         */
/****************************/

void	test_ft_memcpy_basic(CuTest *tc)
{
	void	*(*ft_memcpy)(void *, const void *, size_t) = get_fun("ft_memcpy");
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	char	src[BUFFSIZE];
	size_t	n;
	void	*res1;

	bzero(dst1, BUFFSIZE);
	bzero(dst2, BUFFSIZE);
	n = strlen("Basic test memcpy.");
	strcpy(src, "Basic test memcpy.");
	printf("\n########## FT_MEMCPY ###########\n");
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
	memcpy(dst1, src, n);
	SANDBOX(ft_memcpy(dst2, src, n););
	CuAssert(tc, "ft_memcpy crash when it shouldn't", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	res1 = ft_memcpy(dst2, src, n);
	CuAssertPtrEquals_Msg(tc, "Bad return", dst2, res1);
	CuAssert(tc, "Wrong copy", !memcmp(dst1, dst2, BUFFSIZE));
}

void	test_ft_memcpy_small_size(CuTest *tc)
{
	void	*(*ft_memcpy)(void *, const void *, size_t) = get_fun("ft_memcpy");
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	char	src[BUFFSIZE];
	size_t	n;
	void	*res1;

	bzero(dst1, BUFFSIZE);
	bzero(dst2, BUFFSIZE);
	n = strlen("small size test") - 5;
	strcpy(src, "small size test");
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
	memcpy(dst1, src, n);
	SANDBOX(ft_memcpy(dst2, src, n););
	CuAssert(tc, "ft_memcpy crash when it shouldn't.", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	res1 = ft_memcpy(dst2, src, n);
	CuAssertPtrEquals_Msg(tc, "Bad return", dst2, res1);
	CuAssert(tc, "Wrong copy", !memcmp(dst1, dst2, BUFFSIZE));
}

void	test_ft_memcpy_size_zero(CuTest *tc)
{
	void	*(*ft_memcpy)(void *, const void *, size_t) = get_fun("ft_memcpy");
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	char	src[BUFFSIZE];
	size_t	n;
	void	*res1;

	bzero(dst1, BUFFSIZE);
	bzero(dst2, BUFFSIZE);
	n = 0;
	strcpy(src, "size 0 test");
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
	memcpy(dst1, src, n);
	SANDBOX(ft_memcpy(dst2, src, n););
	CuAssert(tc, "ft_memcpy crash when it shouldn't.", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	res1 = ft_memcpy(dst2, src, n);
	CuAssertPtrEquals_Msg(tc, "Bad return", dst2, res1);
	CuAssert(tc, "Wrong copy", !memcmp(dst1, dst2, BUFFSIZE));
}

void	test_ft_memcpy_same_src_dst(CuTest *tc)
{
	void	*(*ft_memcpy)(void *, const void *, size_t) = get_fun("ft_memcpy");
	char	src[BUFFSIZE];
	char	*dst1 = src;
	char	*dst2 = src;
	size_t	n;
	void	*res1;
	void	*res2;

	n = strlen("Basic test memcpy.");
	strcpy(src, "Basic test memcpy.");
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
	res1 = memcpy(dst1, src, n);
	SANDBOX(ft_memcpy(dst2, src, n););
	CuAssert(tc, "ft_memcpy crash when it shouldn't", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	res2 = ft_memcpy(dst2, src, n);
	CuAssert(tc, "Different return values", res1 == dst1 && res2 == dst2);
	CuAssertPtrEquals_Msg(tc, "Bad return", dst2, res2);
	CuAssert(tc, "Wrong copy", !memcmp(dst1, dst2, BUFFSIZE));
}

void	test_ft_memcpy_null_destination(CuTest *tc)
{
	void	*(*ft_memcpy)(void *, const void *, size_t) = get_fun("ft_memcpy");
	char	*dst = NULL;
	char	src[BUFFSIZE];
	size_t	n;

	n = strlen("null dest test");
	strcpy(src, "null dest test");
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
	SANDBOX(ft_memcpy(dst, src, n););
	CuAssert(tc, "ft_memcpy doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

void	test_ft_memcpy_null_source(CuTest *tc)
{
	void	*(*ft_memcpy)(void *, const void *, size_t) = get_fun("ft_memcpy");
	char	dst[BUFFSIZE];
	char	*src = NULL;
	size_t	n;

	n = strlen("null src test");
	bzero(dst, BUFFSIZE);
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
	SANDBOX(ft_memcpy(dst, src, n););
	CuAssert(tc, "ft_memcpy doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

void	test_ft_memcpy_null_dest_and_src(CuTest *tc)
{
	void	*(*ft_memcpy)(void *, const void *, size_t) = get_fun("ft_memcpy");
	char	*dst = NULL;
	char	*src = NULL;
	size_t	n;

	n = strlen("null dst & src test");
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
	SANDBOX(ft_memcpy(dst, src, n););
	CuAssert(tc, "ft_memcpy doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

CuSuite	*ft_memcpy_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_memcpy_basic);
	SUITE_ADD_TEST(s, test_ft_memcpy_small_size);
	SUITE_ADD_TEST(s, test_ft_memcpy_size_zero);
	SUITE_ADD_TEST(s, test_ft_memcpy_same_src_dst);
	SUITE_ADD_TEST(s, test_ft_memcpy_null_destination);
	SUITE_ADD_TEST(s, test_ft_memcpy_null_source);
	SUITE_ADD_TEST(s, test_ft_memcpy_null_dest_and_src);
	return (s);
}

/****************************/
/*        FT_MEMMOVE        */
/****************************/

void	test_ft_memmove_basic(CuTest *tc)
{
	void	*(*ft_memmove)(void *, const void *, size_t) = get_fun("ft_memmove");
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	void	*res;
	char	src[BUFFSIZE];
	size_t	n;

	bzero(dst1, BUFFSIZE);
	bzero(dst2, BUFFSIZE);
	n = strlen("Testing ft_memmove");
	strcpy(src, "Testing ft_memmove");

	printf("\n########## FT_MEMMOVE ##########\n");
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
	memmove(dst1, src, n);
	SANDBOX(ft_memmove(dst2, src, n););
	CuAssert(tc, "ft_memmove crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res = ft_memmove(dst2, src, n);
	CuAssertPtrEquals_Msg(tc, "Bad return", dst2, res);
	CuAssert(tc, "Bad behavior of ft_memmove", !memcmp(dst1, dst2, BUFFSIZE));
}

void	test_ft_memmove_same_src_dst(CuTest *tc)
{
	void	*(*ft_memmove)(void *, const void *, size_t) = get_fun("ft_memmove");
	char	src[BUFFSIZE];
	char	*dst1 = src;
	char	*dst2 = src;
	void	*res1;
	void	*res2;
	size_t	n;

	n = strlen("Testing ft_memmove");
	strcpy(src, "Testing ft_memmove");
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
	res1 = memmove(dst1, src, n);
	SANDBOX(ft_memmove(dst2, src, n););
	CuAssert(tc, "ft_memmove crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_memmove(dst2, src, n);
	CuAssert(tc, "Different return values", res1 == dst1 && res2 == dst2);
	CuAssertPtrEquals_Msg(tc, "Bad return", dst2, res2);
	CuAssert(tc, "Bad behavior of ft_memmove", !memcmp(dst1, dst2, BUFFSIZE));
}

void	test_ft_memmove_overlap_dst_before_src(CuTest *tc)
{
	void	*(*ft_memmove)(void *, const void *, size_t) = get_fun("ft_memmove");
	char	mem1[BUFFBSIZE];
	char	mem2[BUFFBSIZE];
	char	*dst1 = &mem1[0];
	char	*dst2 = &mem2[0];
	char	*src1 = &mem1[5];
	char	*src2 = &mem2[5];
	char	*res;
	int		exit1;
	int		exit2;
	size_t	n;

	bzero(mem1, BUFFBSIZE);
	bzero(mem2, BUFFBSIZE);
	strcpy(src1, "Testing ft_memmove");
	strcpy(src2, "Testing ft_memmove");
	n = strlen("Testing ft_memmove");
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src1, n);
	SANDBOX(memmove(dst1, src1, n););
	exit1 = g_exit_code;
	SANDBOX(ft_memmove(dst2, src2, n););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_memmove crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_memmove doesn't crash when it should.", !(!WIFSIGNALED(exit2) && WIFSIGNALED(exit1)));
	memmove(dst1, src1, n);
	res = ft_memmove(dst2, src2, n);
	CuAssertPtrEquals_Msg(tc, "Bad return", dst2, res);
	CuAssert(tc, "Bad behavior of ft_memmove", !memcmp(mem1, mem2, BUFFBSIZE));
}

void	test_ft_memmove_overlap_src_before_dst(CuTest *tc)
{
	void	*(*ft_memmove)(void *, const void *, size_t) = get_fun("ft_memmove");
	char	mem1[BUFFBSIZE];
	char	mem2[BUFFBSIZE];
	char	*dst1 = &mem1[5];
	char	*dst2 = &mem2[5];
	char	*src1 = &mem1[0];
	char	*src2 = &mem2[0];
	char	*res;
	int		exit1;
	int		exit2;
	size_t	n;

	bzero(mem1, BUFFBSIZE);
	bzero(mem2, BUFFBSIZE);
	strcpy(src1, "Testing ft_memmove");
	strcpy(src2, "Testing ft_memmove");
	n = strlen("Testing ft_memmove");
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src1, n);
	SANDBOX(memmove(dst1, src1, n););
	exit1 = g_exit_code;
	SANDBOX(ft_memmove(dst2, src2, n););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_memmove crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_memmove doesn't crash when it should.", !(!WIFSIGNALED(exit2) && WIFSIGNALED(exit1)));
	memmove(dst1, src1, n);
	res = ft_memmove(dst2, src2, n);
	CuAssertPtrEquals_Msg(tc, "Bad return", dst2, res);
	CuAssert(tc, "Bad behavior of ft_memmove", !memcmp(mem1, mem2, BUFFBSIZE));
}

void	test_ft_memmove_small_size(CuTest *tc)
{
	void	*(*ft_memmove)(void *, const void *, size_t) = get_fun("ft_memmove");
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	void	*res;
	char	src[BUFFSIZE];
	size_t	n;

	bzero(dst1, BUFFSIZE);
	bzero(dst2, BUFFSIZE);
	n = 5;
	strcpy(src, "Testing ft_memmove");
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
	memmove(dst1, src, n);
	SANDBOX(ft_memmove(dst2, src, n););
	CuAssert(tc, "ft_memmove crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res = ft_memmove(dst2, src, n);
	CuAssertPtrEquals_Msg(tc, "Bad return", dst2, res);
	CuAssert(tc, "Bad behavior of ft_memmove", !memcmp(dst1, dst2, BUFFSIZE));
}

void	test_ft_memmove_size_zero(CuTest *tc)
{
	void	*(*ft_memmove)(void *, const void *, size_t) = get_fun("ft_memmove");
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	void	*res;
	char	src[BUFFSIZE];
	size_t	n;

	bzero(dst1, BUFFSIZE);
	bzero(dst2, BUFFSIZE);
	n = 0;
	strcpy(src, "Testing ft_memmove");
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
	memmove(dst1, src, n);
	SANDBOX(ft_memmove(dst2, src, n););
	CuAssert(tc, "ft_memmove crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res = ft_memmove(dst2, src, n);
	CuAssertPtrEquals_Msg(tc, "Bad return", dst2, res);
	CuAssert(tc, "Bad behavior of ft_memmove", !memcmp(dst1, dst2, BUFFSIZE));
}

void	test_ft_memmove_null_dst(CuTest *tc)
{
	void	*(*ft_memmove)(void *, const void *, size_t) = get_fun("ft_memmove");
	char	*dst = NULL;
	char	src[BUFFSIZE];
	size_t	n;

	n = strlen("Testing ft_memmove");
	strcpy(src, "Testing ft_memmove");
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
	SANDBOX(ft_memmove(dst, src, n););
	CuAssert(tc, "ft_memmove doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

void	test_ft_memmove_null_src(CuTest *tc)
{
	void	*(*ft_memmove)(void *, const void *, size_t) = get_fun("ft_memmove");
	char	dst[BUFFSIZE];
	char	*src = NULL;
	size_t	n;

	n = strlen("Testing ft_memmove");
	bzero(dst, BUFFSIZE);
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
	SANDBOX(ft_memmove(dst, src, n););
	CuAssert(tc, "ft_memmove doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

void	test_ft_memmove_null_dest_and_src(CuTest *tc)
{
	void	*(*ft_memmove)(void *, const void *, size_t) = get_fun("ft_memmove");
	char	*dst = NULL;
	char	*src = NULL;
	size_t	n;

	n = strlen("Testing ft_memmove");
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
	SANDBOX(ft_memmove(dst, src, n););
	CuAssert(tc, "ft_memmove doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

CuSuite *ft_memmove_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_memmove_basic);
	SUITE_ADD_TEST(s, test_ft_memmove_same_src_dst);
	SUITE_ADD_TEST(s, test_ft_memmove_overlap_dst_before_src);
	SUITE_ADD_TEST(s, test_ft_memmove_overlap_src_before_dst);
	SUITE_ADD_TEST(s, test_ft_memmove_small_size);
	SUITE_ADD_TEST(s, test_ft_memmove_size_zero);
	SUITE_ADD_TEST(s, test_ft_memmove_null_dst);
	SUITE_ADD_TEST(s, test_ft_memmove_null_src);
	SUITE_ADD_TEST(s, test_ft_memmove_null_dest_and_src);
	return (s);
}

/****************************/
/*        FT_STRLCPY        */
/****************************/

void	test_ft_strlcpy_basic(CuTest *tc)
{
	size_t	(*ft_strlcpy)(char *, const char *, size_t) = get_fun("ft_strlcpy");
	char	*txt = "TESTING STRLCPY";
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	char	src[BUFFSIZE];
	size_t	size;
	size_t	res1;
	size_t	res2;

	strcpy(src, txt);
	bzero(dst1, BUFFSIZE);
	bzero(dst2, BUFFSIZE);
	size = strlen(txt) + 1;
	printf("\n########## FT_STRLCPY ##########\n");
	sprintf(buff.txt, "%s: src = %s (len = %lu) size = %lu\n", __func__, src, strlen(src), size);
	res1 = strlcpy(dst1, src, size);
	SANDBOX(ft_strlcpy(dst2, src, size););
	CuAssert(tc, "ft_strlcpy crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strlcpy(dst2, src, size);
	CuAssertStrEquals(tc, dst1, dst2);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strlcpy_small_size(CuTest *tc)
{
	size_t	(*ft_strlcpy)(char *, const char *, size_t) = get_fun("ft_strlcpy");
	char	*txt = "TESTING STRLCPY";
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	char	src[BUFFSIZE];
	size_t	size;
	size_t	res1;
	size_t	res2;

	strcpy(src, txt);
	bzero(dst1, BUFFSIZE);
	bzero(dst2, BUFFSIZE);
	size = strlen(txt) - 5;
	sprintf(buff.txt, "%s: src = %s (len = %lu) size = %lu\n", __func__, src, strlen(src), size);
	res1 = strlcpy(dst1, src, size);
	SANDBOX(ft_strlcpy(dst2, src, size););
	CuAssert(tc, "ft_strlcpy crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strlcpy(dst2, src, size);
	CuAssertStrEquals(tc, dst1, dst2);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strlcpy_bigger_size(CuTest *tc)
{
	size_t	(*ft_strlcpy)(char *, const char *, size_t) = get_fun("ft_strlcpy");
	char	*txt = "TESTING STRLCPY";
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	char	src[BUFFSIZE];
	size_t	size;
	size_t	res1;
	size_t	res2;

	strcpy(src, txt);
	bzero(dst1, BUFFSIZE);
	bzero(dst2, BUFFSIZE);
	size = strlen(txt) + 10;
	sprintf(buff.txt, "%s: src = %s (len = %lu) size = %lu\n", __func__, src, strlen(src), size);
	res1 = strlcpy(dst1, src, size);
	SANDBOX(ft_strlcpy(dst2, src, size););
	CuAssert(tc, "ft_strlcpy crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strlcpy(dst2, src, size);
	CuAssert(tc, "Bad copy", !memcmp(dst1, dst2, BUFFSIZE));
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strlcpy_size_zero(CuTest *tc)
{
	size_t	(*ft_strlcpy)(char *, const char *, size_t) = get_fun("ft_strlcpy");
	char	*txt = "TESTING STRLCPY";
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	char	src[BUFFSIZE];
	size_t	size;
	size_t	res1;
	size_t	res2;

	strcpy(src, txt);
	memset(dst1, 'a', BUFFSIZE);
	memset(dst2, 'a', BUFFSIZE);
	size = 0;
	sprintf(buff.txt, "%s: src = %s (len = %lu) size = %lu\n", __func__, src, strlen(src), size);
	res1 = strlcpy(dst1, src, size);
	SANDBOX(ft_strlcpy(dst2, src, size););
	CuAssert(tc, "ft_strlcpy crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strlcpy(dst2, src, size);
	CuAssert(tc, "Bad copy", !memcmp(dst1, dst2, BUFFSIZE));
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strlcpy_null_dst(CuTest *tc)
{
	size_t	(*ft_strlcpy)(char *, const char *, size_t) = get_fun("ft_strlcpy");
	char	*dst = NULL;
	char	src[BUFFSIZE];
	size_t	size;

	memset(src, 'a', BUFFSIZE - 1);
	src[BUFFSIZE - 1] = '\0';
	size = strlen(src) + 1;
	sprintf(buff.txt, "%s: src = %s (len = %lu) size = %lu\n", __func__, src, strlen(src), size);
	SANDBOX(ft_strlcpy(dst, src, size););
	CuAssert(tc, "ft_strlcpy doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

void	test_ft_strlcpy_null_src(CuTest *tc)
{
	size_t	(*ft_strlcpy)(char *, const char *, size_t) = get_fun("ft_strlcpy");
	char	dst[BUFFSIZE];
	char	*src = NULL;
	size_t	size;

	bzero(dst, BUFFSIZE);
	size = 10;
	sprintf(buff.txt, "%s: src = %s (len = %d) size = %lu\n", __func__, src, 0, size);
	SANDBOX(ft_strlcpy(dst, src, size););
	CuAssert(tc, "ft_strlcpy doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

void	test_ft_strlcpy_null_dst_and_src(CuTest *tc)
{
	size_t	(*ft_strlcpy)(char *, const char *, size_t) = get_fun("ft_strlcpy");
	char	*dst = NULL;
	char	*src = NULL;
	size_t	size;

	size = 10;
	sprintf(buff.txt, "%s: src = %s (len = %d) size = %lu\n", __func__, src, 0, size);
	SANDBOX(ft_strlcpy(dst, src, size););
	CuAssert(tc, "ft_strlcpy doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

CuSuite *ft_strlcpy_get_suite()
{
	CuSuite	*s = CuSuiteNew();

	SUITE_ADD_TEST(s, test_ft_strlcpy_basic);
	SUITE_ADD_TEST(s, test_ft_strlcpy_small_size);
	SUITE_ADD_TEST(s, test_ft_strlcpy_bigger_size);
	SUITE_ADD_TEST(s, test_ft_strlcpy_size_zero);
	SUITE_ADD_TEST(s, test_ft_strlcpy_null_dst);
	SUITE_ADD_TEST(s, test_ft_strlcpy_null_src);
	SUITE_ADD_TEST(s, test_ft_strlcpy_null_dst_and_src);
	return (s);
}

/****************************/
/*        FT_STRLCAT        */
/****************************/

void	test_ft_strlcat_basic(CuTest *tc)
{
	size_t	(*ft_strlcat)(char *, const char *, size_t) = get_fun("ft_strlcat");
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	char	src[BUFFSIZE];
	size_t	size;
	size_t	res1;
	size_t	res2;

	strcpy(dst1, "hello");
	strcpy(dst2, "hello");
	strcpy(src, " everyone!");
	size = strlen(dst1) + strlen(src) + 1;
	printf("\n########## FT_STRLCAT ##########\n");
	sprintf(buff.txt, "%s:\tsrc=%s(%lu), dst=%s(%lu), size=%lu\n", __func__, src, strlen(src),
		   dst1, strlen(dst1), size);
	res1 = strlcat(dst1, src, size);
	SANDBOX(ft_strlcat(dst2, src, size););
	CuAssert(tc, "ft_strlcat crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strlcat(dst2, src, size);
	CuAssertStrEquals(tc, dst1, dst2);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strlcat_smaller_size(CuTest *tc)
{
	size_t	(*ft_strlcat)(char *, const char *, size_t) = get_fun("ft_strlcat");
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	char	src[BUFFSIZE];
	size_t	size;
	size_t	res1;
	size_t	res2;

	strcpy(dst1, "hello");
	strcpy(dst2, "hello");
	strcpy(src, " everyone!");
	size = strlen(dst1) + strlen(src) - 3;
	sprintf(buff.txt, "%s:\tsrc=%s(%lu), dst=%s(%lu), size=%lu\n", __func__, src, strlen(src),
		   dst1, strlen(dst1), size);
	res1 = strlcat(dst1, src, size);
	SANDBOX(ft_strlcat(dst2, src, size););
	CuAssert(tc, "ft_strlcat crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strlcat(dst2, src, size);
	CuAssertStrEquals(tc, dst1, dst2);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strlcat_smaller_small_size(CuTest *tc)
{
	size_t	(*ft_strlcat)(char *, const char *, size_t) = get_fun("ft_strlcat");
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	char	src[BUFFSIZE];
	size_t	size;
	size_t	res1;
	size_t	res2;

	strcpy(dst1, "hello");
	strcpy(dst2, "hello");
	strcpy(src, " everyone!");
	size = strlen(dst1) - 2;
	sprintf(buff.txt, "%s:\tsrc=%s(%lu), dst=%s(%lu), size=%lu\n", __func__, src, strlen(src),
		   dst1, strlen(dst1), size);
	res1 = strlcat(dst1, src, size);
	SANDBOX(ft_strlcat(dst2, src, size););
	CuAssert(tc, "ft_strlcat crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strlcat(dst2, src, size);
	CuAssertStrEquals(tc, dst1, dst2);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strlcat_bigger_size(CuTest *tc)
{
	size_t	(*ft_strlcat)(char *, const char *, size_t) = get_fun("ft_strlcat");
	char	dst[BUFFSIZE];
	char	src[BUFFSIZE];
	size_t	size;
	size_t	res;

	strcpy(dst, "hello");
	strcpy(src, " everyone!");
	size = strlen(dst) + strlen(src) + 23;
	sprintf(buff.txt, "%s:\tsrc=%s(%lu), dst=%s(%lu), size=%lu\n", __func__, src, strlen(src),
		   dst, strlen(dst), size);
	SANDBOX(ft_strlcat(dst, src, size););
	CuAssert(tc, "ft_strlcat crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res = ft_strlcat(dst, src, size);
	CuAssertStrEquals(tc, "hello everyone!", dst);
	CuAssertIntEquals(tc, 15, res);
}

void	test_ft_strlcat_size_zero(CuTest *tc)
{
	size_t	(*ft_strlcat)(char *, const char *, size_t) = get_fun("ft_strlcat");
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	char	src[BUFFSIZE];
	size_t	size;
	size_t	res1;
	size_t	res2;

	strcpy(dst1, "hello");
	strcpy(dst2, "hello");
	strcpy(src, " everyone!");
	size = 0;
	sprintf(buff.txt, "%s:\tsrc=%s(%lu), dst=%s(%lu), size=%lu\n", __func__, src, strlen(src),
		   dst1, strlen(dst1), size);
	res1 = strlcat(dst1, src, size);
	SANDBOX(ft_strlcat(dst2, src, size););
	CuAssert(tc, "ft_strlcat crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strlcat(dst2, src, size);
	CuAssertStrEquals(tc, dst1, dst2);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strlcat_null_dst(CuTest *tc)
{
	size_t	(*ft_strlcat)(char *, const char *, size_t) = get_fun("ft_strlcat");
	char	*dst = NULL;
	char	src[BUFFSIZE];
	size_t	size;

	strcpy(src, " everyone!");
	size = strlen(src) + 1;
	sprintf(buff.txt, "%s:\tsrc=%s(%lu), dst=%s(%lu), size=%lu\n", __func__, src, strlen(src),
		   dst, (size_t)0, size);
	SANDBOX(ft_strlcat(dst, src, size););
	CuAssert(tc, "ft_strlcat doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

void	test_ft_strlcat_null_dst_and_size_zero(CuTest *tc)
{
	size_t	(*ft_strlcat)(char *, const char *, size_t) = get_fun("ft_strlcat");
	char	*dst = NULL;
	char	src[BUFFSIZE];
	size_t	size;
	size_t	res;

	strcpy(src, " everyone!");
	size = 0;
	sprintf(buff.txt, "%s:\tsrc=%s(%lu), dst=%s(%lu), size=%lu\n", __func__, src, strlen(src),
		   dst, (size_t)0, size);
	SANDBOX(ft_strlcat(dst, src, size););
	CuAssert(tc, "ft_strlcat crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res = ft_strlcat(dst, src, size);
	CuAssertIntEquals(tc, strlen(src), res);
}

void	test_ft_strlcat_null_src(CuTest *tc)
{
	size_t	(*ft_strlcat)(char *, const char *, size_t) = get_fun("ft_strlcat");
	char	dst[BUFFSIZE];
	char	*src = NULL;
	size_t	size;

	strcpy(dst, "hello");
	size = strlen(dst) + 1;
	sprintf(buff.txt, "%s:\tsrc=%s(%lu), dst=%s(%lu), size=%lu\n", __func__, src, (size_t)0,
		   dst, strlen(dst), size);
	SANDBOX(ft_strlcat(dst, src, size););
	CuAssert(tc, "ft_strlcat doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

void	test_ft_strlcat_null_dst_and_src(CuTest *tc)
{
	size_t	(*ft_strlcat)(char *, const char *, size_t) = get_fun("ft_strlcat");
	char	*dst = NULL;
	char	*src = NULL;
	size_t	size;

	size = BUFFSIZE;
	sprintf(buff.txt, "%s:\tsrc=%s(%lu), dst=%s(%lu), size=%lu\n", __func__, src, (size_t)0,
		   dst, (size_t)0, size);
	SANDBOX(ft_strlcat(dst, src, size););
	CuAssert(tc, "ft_strlcat doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

CuSuite *ft_strlcat_get_suite()
{
	CuSuite *s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_strlcat_basic);
	SUITE_ADD_TEST(s, test_ft_strlcat_smaller_size);
	SUITE_ADD_TEST(s, test_ft_strlcat_smaller_small_size);
	SUITE_ADD_TEST(s, test_ft_strlcat_bigger_size);
	SUITE_ADD_TEST(s, test_ft_strlcat_size_zero);
	SUITE_ADD_TEST(s, test_ft_strlcat_null_dst);
	SUITE_ADD_TEST(s, test_ft_strlcat_null_dst_and_size_zero);
	SUITE_ADD_TEST(s, test_ft_strlcat_null_src);
	SUITE_ADD_TEST(s, test_ft_strlcat_null_dst_and_src);
	return (s);
}

/****************************/
/*        FT_TOUPPER        */
/****************************/

void	test_ft_toupper_all(CuTest *tc)
{
	int	(*ft_toupper)(int) = get_fun("ft_toupper");
	int	c = 0;
	int	res1;
	int	res2;

	printf("\n########## FT_TOUPPER ##########\n");
	sprintf(buff.txt, "%s: Basic inputs (0 => 255)\n", __func__);
	while (c < 256)
	{
		res1 = toupper(c);
		res2 = ft_toupper(c);
		CuAssertIntEquals(tc, res1, res2);
		c++;
	}
}

CuSuite	*ft_toupper_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_toupper_all);
	return (s);
}

/****************************/
/*        FT_TOLOWER        */
/****************************/

void	test_ft_tolower_all(CuTest *tc)
{
	int	(*ft_tolower)(int) = get_fun("ft_tolower");
	int	c = 0;
	int	res1;
	int	res2;

	printf("\n########## FT_TOLOWER ##########\n");
	sprintf(buff.txt, "%s: Basic inputs (0 => 255)\n", __func__);
	while (c < 256)
	{
		res1 = tolower(c);
		res2 = ft_tolower(c);
		CuAssertIntEquals(tc, res1, res2);
		c++;
	}
}

CuSuite	*ft_tolower_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_tolower_all);
	return (s);
}

/****************************/
/*        FT_STRCHR         */
/****************************/

void	test_ft_strchr_basic(CuTest *tc)
{
	char	*(*ft_strchr)(const char *, int) = get_fun("ft_strchr");
	char	s[BUFFSIZE];
	int		c;
	char	*res1;
	char	*res2;

	strcpy(s, "Hello everyone!");
	c = '!';
	printf("\n########### FT_STRCHR ##########\n");
	sprintf(buff.txt, "%s: s = %s, c = %d(%c)\n", __func__, s, c, c);
	res1 = strchr(s, c);
	SANDBOX(ft_strchr(s, c););
	CuAssert(tc, "ft_strchr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strchr(s, c);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_strchr_multiple_occur(CuTest *tc)
{
	char	*(*ft_strchr)(const char *, int) = get_fun("ft_strchr");
	char	s[BUFFSIZE];
	int		c;
	char	*res1;
	char	*res2;

	strcpy(s, "Hello everyone!");
	c = 'o';
	sprintf(buff.txt, "%s: s = %s, c = %d(%c)\n", __func__, s, c, c);
	res1 = strchr(s, c);
	SANDBOX(ft_strchr(s, c););
	CuAssert(tc, "ft_strchr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strchr(s, c);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_strchr_no_c_in_s(CuTest *tc)
{
	char	*(*ft_strchr)(const char *, int) = get_fun("ft_strchr");
	char	s[BUFFSIZE];
	int		c;
	char	*res1;
	char	*res2;

	strcpy(s, "Hello everyone!");
	c = 'A';
	sprintf(buff.txt, "%s: s = %s, c = %d(%c)\n", __func__, s, c, c);
	res1 = strchr(s, c);
	SANDBOX(ft_strchr(s, c););
	CuAssert(tc, "ft_strchr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strchr(s, c);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_strchr_c_zero(CuTest *tc)
{
	char	*(*ft_strchr)(const char *, int) = get_fun("ft_strchr");
	char	s[BUFFSIZE];
	int		c;
	char	*res1;
	char	*res2;

	strcpy(s, "Hello everyone!");
	c = '\0';
	sprintf(buff.txt, "%s: s = %s, c = %d(%c)\n", __func__, s, c, c);
	res1 = strchr(s, c);
	SANDBOX(ft_strchr(s, c););
	CuAssert(tc, "ft_strchr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strchr(s, c);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_strchr_null_s(CuTest *tc)
{
	char	*(*ft_strchr)(const char *, int) = get_fun("ft_strchr");
	char	*s = NULL;
	int		c;

	c = 'o';
	sprintf(buff.txt, "%s: s = %s, c = %d(%c)\n", __func__, s, c, c);
	SANDBOX(ft_strchr(s, c););
	CuAssert(tc, "ft_strchr doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

CuSuite	*ft_strchr_get_suite()
{
	CuSuite *s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_strchr_basic);
	SUITE_ADD_TEST(s, test_ft_strchr_multiple_occur);
	SUITE_ADD_TEST(s, test_ft_strchr_no_c_in_s);
	SUITE_ADD_TEST(s, test_ft_strchr_c_zero);
	SUITE_ADD_TEST(s, test_ft_strchr_null_s);
	return (s);
}

/****************************/
/*        FT_STRRCHR        */
/****************************/

void	test_ft_strrchr_basic(CuTest *tc)
{
	char	*(*ft_strrchr)(const char *, int) = get_fun("ft_strrchr");
	char	s[BUFFSIZE];
	int		c;
	char	*res1;
	char	*res2;

	strcpy(s, "Hello everyone!");
	c = '!';
	printf("\n########## FT_STRRCHR ##########\n");
	sprintf(buff.txt, "%s: s = %s, c = %d(%c)\n", __func__, s, c, c);
	res1 = strrchr(s, c);
	SANDBOX(ft_strrchr(s, c););
	CuAssert(tc, "ft_strrchr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strrchr(s, c);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_strrchr_multiple_occur(CuTest *tc)
{
	char	*(*ft_strrchr)(const char *, int) = get_fun("ft_strrchr");
	char	s[BUFFSIZE];
	int		c;
	char	*res1;
	char	*res2;

	strcpy(s, "Hello everyone!");
	c = 'o';
	sprintf(buff.txt, "%s: s = %s, c = %d(%c)\n", __func__, s, c, c);
	res1 = strrchr(s, c);
	SANDBOX(ft_strrchr(s, c););
	CuAssert(tc, "ft_strrchr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strrchr(s, c);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_strrchr_no_c_in_s(CuTest *tc)
{
	char	*(*ft_strrchr)(const char *, int) = get_fun("ft_strrchr");
	char	s[BUFFSIZE];
	int		c;
	char	*res1;
	char	*res2;

	strcpy(s, "Hello everyone!");
	c = 'A';
	sprintf(buff.txt, "%s: s = %s, c = %d(%c)\n", __func__, s, c, c);
	res1 = strrchr(s, c);
	SANDBOX(ft_strrchr(s, c););
	CuAssert(tc, "ft_strrchr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strrchr(s, c);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_strrchr_c_zero(CuTest *tc)
{
	char	*(*ft_strrchr)(const char *, int) = get_fun("ft_strrchr");
	char	s[BUFFSIZE];
	int		c;
	char	*res1;
	char	*res2;

	strcpy(s, "Hello everyone!");
	c = '\0';
	sprintf(buff.txt, "%s: s = %s, c = %d(\\0)\n", __func__, s, c);
	res1 = strrchr(s, c);
	SANDBOX(ft_strrchr(s, c););
	CuAssert(tc, "ft_strrchr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strrchr(s, c);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_strrchr_null_s(CuTest *tc)
{
	char	*(*ft_strrchr)(const char *, int) = get_fun("ft_strrchr");
	char	*s = NULL;
	int		c;

	c = 'o';
	sprintf(buff.txt, "%s: s = %s, c = %d(%c)\n", __func__, s, c, c);
	SANDBOX(ft_strrchr(s, c););
	CuAssert(tc, "ft_strrchr doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

CuSuite	*ft_strrchr_get_suite()
{
	CuSuite *s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_strrchr_basic);
	SUITE_ADD_TEST(s, test_ft_strrchr_multiple_occur);
	SUITE_ADD_TEST(s, test_ft_strrchr_no_c_in_s);
	SUITE_ADD_TEST(s, test_ft_strrchr_c_zero);
	SUITE_ADD_TEST(s, test_ft_strrchr_null_s);
	return (s);
}

/****************************/
/*        FT_STRNCMP        */
/****************************/

void	test_ft_strncmp_basic_1(CuTest *tc)
{
	int		(*ft_strncmp)(const char *, const char *, size_t) = get_fun("ft_strncmp");
	char	s1[BUFFSIZE];
	char	s2[BUFFSIZE];
	size_t	n;
	int		res1;
	int		res2;

	strcpy(s1, "Triple Monstre");
	strcpy(s2, "Triple Monstre");
	n = strlen(s1);
	printf("\n########## FT_STRNCMP ##########\n");
	sprintf(buff.txt, "%s: s1 = %s, s2 = %s, n = %lu\n", __func__, s1, s2, n);
	res1 = strncmp(s1, s2, n);
	SANDBOX(ft_strncmp(s1, s2, n););
	CuAssert(tc, "ft_strncmp crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strncmp(s1, s2, n);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strncmp_basic_2_1(CuTest *tc)
{
	int		(*ft_strncmp)(const char *, const char *, size_t) = get_fun("ft_strncmp");
	char	s1[BUFFSIZE];
	char	s2[BUFFSIZE];
	size_t	n;
	int		res1;
	int		res2;

	strcpy(s1, "Triple Monstre");
	strcpy(s2, "Triple Montres");
	n = strlen(s1);
	sprintf(buff.txt, "%s: s1 = %s, s2 = %s, n = %lu\n", __func__, s1, s2, n);
	res1 = strncmp(s1, s2, n);
	SANDBOX(ft_strncmp(s1, s2, n););
	CuAssert(tc, "ft_strncmp crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strncmp(s1, s2, n);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strncmp_basic_2_2(CuTest *tc)
{
	int		(*ft_strncmp)(const char *, const char *, size_t) = get_fun("ft_strncmp");
	char	s1[BUFFSIZE];
	char	s2[BUFFSIZE];
	size_t	n;
	int		res1;
	int		res2;

	strcpy(s1, "Triple Montres");
	strcpy(s2, "Triple Monstre");
	n = strlen(s1);
	sprintf(buff.txt, "%s: s1 = %s, s2 = %s, n = %lu\n", __func__, s1, s2, n);
	res1 = strncmp(s1, s2, n);
	SANDBOX(ft_strncmp(s1, s2, n););
	CuAssert(tc, "ft_strncmp crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strncmp(s1, s2, n);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strncmp_len_s1_lt_len_s2(CuTest *tc)
{
	int		(*ft_strncmp)(const char *, const char *, size_t) = get_fun("ft_strncmp");
	char	s1[BUFFSIZE];
	char	s2[BUFFSIZE];
	size_t	n;
	int		res1;
	int		res2;

	strcpy(s1, "Triple Mons");
	strcpy(s2, "Triple Monstre");
	n = strlen(s2);
	sprintf(buff.txt, "%s: s1 = %s, s2 = %s, n = %lu\n", __func__, s1, s2, n);
	res1 = strncmp(s1, s2, n);
	SANDBOX(ft_strncmp(s1, s2, n););
	CuAssert(tc, "ft_strncmp crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strncmp(s1, s2, n);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strncmp_len_s1_gt_len_s2(CuTest *tc)
{
	int		(*ft_strncmp)(const char *, const char *, size_t) = get_fun("ft_strncmp");
	char	s1[BUFFSIZE];
	char	s2[BUFFSIZE];
	size_t	n;
	int		res1;
	int		res2;

	strcpy(s1, "Triple Monstre");
	strcpy(s2, "Triple Mons");
	n = strlen(s1);
	sprintf(buff.txt, "%s: s1 = %s, s2 = %s, n = %lu\n", __func__, s1, s2, n);
	res1 = strncmp(s1, s2, n);
	SANDBOX(ft_strncmp(s1, s2, n););
	CuAssert(tc, "ft_strncmp crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strncmp(s1, s2, n);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strncmp_smaller_n(CuTest *tc)
{
	int		(*ft_strncmp)(const char *, const char *, size_t) = get_fun("ft_strncmp");
	char	s1[BUFFSIZE];
	char	s2[BUFFSIZE];
	size_t	n;
	int		res1;
	int		res2;

	strcpy(s1, "Triple Monstre");
	strcpy(s2, "Triple Monstre");
	n = strlen(s1) - 5;
	sprintf(buff.txt, "%s: s1 = %s, s2 = %s, n = %lu\n", __func__, s1, s2, n);
	res1 = strncmp(s1, s2, n);
	SANDBOX(ft_strncmp(s1, s2, n););
	CuAssert(tc, "ft_strncmp crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strncmp(s1, s2, n);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strncmp_bigger_n(CuTest *tc)
{
	int		(*ft_strncmp)(const char *, const char *, size_t) = get_fun("ft_strncmp");
	char	s1[BUFFSIZE];
	char	s2[BUFFSIZE];
	size_t	n;
	int		res1;
	int		res2;

	strcpy(s1, "Triple Monstre");
	strcpy(s2, "Triple Monstre");
	n = strlen(s1) + 10;
	sprintf(buff.txt, "%s: s1 = %s, s2 = %s, n = %lu\n", __func__, s1, s2, n);
	res1 = strncmp(s1, s2, n);
	SANDBOX(ft_strncmp(s1, s2, n););
	CuAssert(tc, "ft_strncmp crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strncmp(s1, s2, n);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strncmp_n_zero(CuTest *tc)
{
	int		(*ft_strncmp)(const char *, const char *, size_t) = get_fun("ft_strncmp");
	char	s1[BUFFSIZE];
	char	s2[BUFFSIZE];
	size_t	n;
	int		res1;
	int		res2;

	strcpy(s1, "Triple Monstre");
	strcpy(s2, "Triple Monstre");
	n = 0;
	sprintf(buff.txt, "%s: s1 = %s, s2 = %s, n = %lu\n", __func__, s1, s2, n);
	res1 = strncmp(s1, s2, n);
	SANDBOX(ft_strncmp(s1, s2, n););
	CuAssert(tc, "ft_strncmp crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strncmp(s1, s2, n);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strncmp_not_u_char(CuTest *tc)
{
	int		(*ft_strncmp)(const char *, const char *, size_t) = get_fun("ft_strncmp");
	char	s1[2];
	char	s2[2];
	size_t	n;
	int		res1;
	int		res2;

	s1[0] = '\200';
	s1[1] = '\0';
	s2[0] = '\0';
	n = 1;
	sprintf(buff.txt, "%s: s1 = %s, s2 = %s, n = %lu\n", __func__, s1, s2, n);
	res1 = strncmp(s1, s2, n);
	SANDBOX(ft_strncmp(s1, s2, n););
	CuAssert(tc, "ft_strncmp crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strncmp(s1, s2, n);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strncmp_null_s1(CuTest *tc)
{
	int		(*ft_strncmp)(const char *, const char *, size_t) = get_fun("ft_strncmp");
	char	*s1 = NULL;
	char	s2[BUFFSIZE];
	size_t	n;

	strcpy(s2, "Triple Monstre");
	n = strlen(s2);
	sprintf(buff.txt, "%s: s1 = %s, s2 = %s, n = %lu\n", __func__, s1, s2, n);
	SANDBOX(ft_strncmp(s1, s2, n););
	CuAssert(tc, "ft_strncmp doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

void	test_ft_strncmp_null_s2(CuTest *tc)
{
	int		(*ft_strncmp)(const char *, const char *, size_t) = get_fun("ft_strncmp");
	char	s1[BUFFSIZE];
	char	*s2 = NULL;
	size_t	n;

	strcpy(s1, "Triple Monstre");
	n = strlen(s1);
	sprintf(buff.txt, "%s: s1 = %s, s2 = %s, n = %lu\n", __func__, s1, s2, n);
	SANDBOX(ft_strncmp(s1, s2, n););
	CuAssert(tc, "ft_strncmp doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

void	test_ft_strncmp_null_s1_and_s2_n_gt_zero(CuTest *tc)
{
	int		(*ft_strncmp)(const char *, const char *, size_t) = get_fun("ft_strncmp");
	char	*s1 = NULL;
	char	*s2 = NULL;
	size_t	n;

	n = 10;
	sprintf(buff.txt, "%s: s1 = %s, s2 = %s, n = %lu\n", __func__, s1, s2, n);
	SANDBOX(ft_strncmp(s1, s2, n););
	CuAssert(tc, "ft_strncmp doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

void	test_ft_strncmp_null_s1_and_s2_n_zero(CuTest *tc)
{
	int		(*ft_strncmp)(const char *, const char *, size_t) = get_fun("ft_strncmp");
	char	*s1 = NULL;
	char	*s2 = NULL;
	size_t	n;

	n = 0;
	sprintf(buff.txt, "%s: s1 = %s, s2 = %s, n = %lu\n", __func__, s1, s2, n);
	SANDBOX(ft_strncmp(s1, s2, n););
	CuAssert(tc, "ft_strncmp crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
}

CuSuite	*ft_strncmp_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_strncmp_basic_1);
	SUITE_ADD_TEST(s, test_ft_strncmp_basic_2_1);
	SUITE_ADD_TEST(s, test_ft_strncmp_basic_2_2);
	SUITE_ADD_TEST(s, test_ft_strncmp_len_s1_lt_len_s2);
	SUITE_ADD_TEST(s, test_ft_strncmp_len_s1_gt_len_s2);
	SUITE_ADD_TEST(s, test_ft_strncmp_smaller_n);
	SUITE_ADD_TEST(s, test_ft_strncmp_bigger_n);
	SUITE_ADD_TEST(s, test_ft_strncmp_n_zero);
	SUITE_ADD_TEST(s, test_ft_strncmp_not_u_char);
	SUITE_ADD_TEST(s, test_ft_strncmp_null_s1);
	SUITE_ADD_TEST(s, test_ft_strncmp_null_s2);
	SUITE_ADD_TEST(s, test_ft_strncmp_null_s1_and_s2_n_gt_zero);
	SUITE_ADD_TEST(s, test_ft_strncmp_null_s1_and_s2_n_zero);
	return (s);
}

/****************************/
/*        FT_MEMCHR         */
/****************************/

void	test_ft_memchr_basic(CuTest *tc)
{
	void	*(*ft_memchr)(const void *, int, size_t) = get_fun("ft_memchr");
	char	*s = "\0\23\12\42\0|{:[&]}\200\177\23";
	int		c;
	size_t	n;
	char	*res1;
	char	*res2;

	c = '\42';
	n = 14;
	printf("\n########## FT_MEMCHR ###########\n");
	sprintf(buff.txt, "%s: s=%s, c=%d, n=%lu\n", __func__, s, c, n);
	res1 = memchr(s, c, n);
	SANDBOX(ft_memchr(s, c, n););
	CuAssert(tc, "ft_memchr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_memchr(s, c, n);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_memchr_multiple_c(CuTest *tc)
{
	void	*(*ft_memchr)(const void *, int, size_t) = get_fun("ft_memchr");
	char	*s = "\0\23\12\42\0|{:[&]}\200\177\23";
	int		c;
	size_t	n;
	char	*res1;
	char	*res2;

	c = '\23';
	n = 14;
	sprintf(buff.txt, "%s: s=%s, c=%d, n=%lu\n", __func__, s, c, n);
	res1 = memchr(s, c, n);
	SANDBOX(ft_memchr(s, c, n););
	CuAssert(tc, "ft_memchr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_memchr(s, c, n);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_memchr_c_not_in_s(CuTest *tc)
{
	void	*(*ft_memchr)(const void *, int, size_t) = get_fun("ft_memchr");
	char	*s = "\0\23\12\42\0|{:[&]}\200\177\23";
	int		c;
	size_t	n;
	char	*res1;
	char	*res2;

	c = '\1';
	n = 14;
	sprintf(buff.txt, "%s: s=%s, c=%d, n=%lu\n", __func__, s, c, n);
	res1 = memchr(s, c, n);
	SANDBOX(ft_memchr(s, c, n););
	CuAssert(tc, "ft_memchr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_memchr(s, c, n);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_memchr_c_not_unsigned_char(CuTest *tc)
{
	void	*(*ft_memchr)(const void *, int, size_t) = get_fun("ft_memchr");
	char	*s = "\0\23\12\42\0|{:[&]}\2002\177\23";
	int		c;
	size_t	n;
	char	*res1;
	char	*res2;

	c = '\200';
	n = 14;
	sprintf(buff.txt, "%s: s=%s, c=%d, n=%lu\n", __func__, s, c, n);
	res1 = memchr(s, c, n);
	SANDBOX(ft_memchr(s, c, n););
	CuAssert(tc, "ft_memchr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_memchr(s, c, n);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_memchr_c_zero(CuTest *tc)
{
	void	*(*ft_memchr)(const void *, int, size_t) = get_fun("ft_memchr");
	char	*s = "\0\23\12\42\0|{:[&]}\200\177\23";
	int		c;
	size_t	n;
	char	*res1;
	char	*res2;

	c = '\0';
	n = 14;
	sprintf(buff.txt, "%s: s=%s, c=%d, n=%lu\n", __func__, s, c, n);
	res1 = memchr(s, c, n);
	SANDBOX(ft_memchr(s, c, n););
	CuAssert(tc, "ft_memchr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_memchr(s, c, n);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_memchr_smaller_n(CuTest *tc)
{
	void	*(*ft_memchr)(const void *, int, size_t) = get_fun("ft_memchr");
	char	*s = "\0\23\12\42\0|{:[&]}\200\177\23";
	int		c;
	size_t	n;
	char	*res1;
	char	*res2;

	c = '\12';
	n = 5;
	sprintf(buff.txt, "%s: s=%s, c=%d, n=%lu\n", __func__, s, c, n);
	res1 = memchr(s, c, n);
	SANDBOX(ft_memchr(s, c, n););
	CuAssert(tc, "ft_memchr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_memchr(s, c, n);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_memchr_null_s_1(CuTest *tc)
{
	void	*(*ft_memchr)(const void *, int, size_t) = get_fun("ft_memchr");
	char	*s = NULL;
	int		c;
	size_t	n;

	c = '\12';
	n = 14;
	sprintf(buff.txt, "%s: s=%s, c=%d, n=%lu\n", __func__, s, c, n);
	SANDBOX(ft_memchr(s, c, n););
	CuAssert(tc, "ft_memchr doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

void	test_ft_memchr_null_s_2(CuTest *tc)
{
	void	*(*ft_memchr)(const void *, int, size_t) = get_fun("ft_memchr");
	char	*s = NULL;
	int		c;
	size_t	n;

	c = '\12';
	n = 0;
	sprintf(buff.txt, "%s: s=%s, c=%d, n=%lu\n", __func__, s, c, n);
	SANDBOX(ft_memchr(s, c, n););
	CuAssert(tc, "ft_memchr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
}

CuSuite	*ft_memchr_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_memchr_basic);
	SUITE_ADD_TEST(s, test_ft_memchr_multiple_c);
	SUITE_ADD_TEST(s, test_ft_memchr_c_not_in_s);
	SUITE_ADD_TEST(s, test_ft_memchr_c_not_unsigned_char);
	SUITE_ADD_TEST(s, test_ft_memchr_c_zero);
	SUITE_ADD_TEST(s, test_ft_memchr_smaller_n);
	SUITE_ADD_TEST(s, test_ft_memchr_null_s_1);
	SUITE_ADD_TEST(s, test_ft_memchr_null_s_2);
	return (s);
}

/****************************/
/*        FT_MEMCMP         */
/****************************/

/*
 * GNU simple memcmp implementation, used as reference to test the optimized one
 *
 * https://github.com/lattera/glibc/blob/master/string/test-memcmp.c
*/

static int simple_memcmp (const void *s1, const void *s2, size_t n)
{
	int ret = 0;

	while (n-- && (ret = *(unsigned char *) s1++ - *(unsigned char *) s2++) == 0);
	return ret;
}


void	test_ft_memcmp_basic_1(CuTest *tc)
{
	int		(*ft_memcmp)(const void *, const void *, size_t) = get_fun("ft_memcmp");
	int		(*memcmp)(const void *, const void *, size_t) = simple_memcmp;
	int		arr1[] = {0x01, 0x02, 0x03, 0x04, 0x05};
	int		arr2[] = {0x01, 0x02, 0x03, 0x04, 0x05};
	size_t	n = 5;
	int		res1;
	int		res2;

	printf("\n########## FT_MEMCMP ###########\n");
	sprintf(buff.txt, "%s: s1=%s, s2=%s, n=%lu\n", __func__, (char *)arr1, (char *)arr2, n);
	res1 = memcmp(arr1, arr2, n);
	SANDBOX(ft_memcmp(arr1, arr2, n););
	CuAssert(tc, "ft_memcmp crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_memcmp(arr1, arr2, n);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_memcmp_basic_2_1(CuTest *tc)
{
	int		(*ft_memcmp)(const void *, const void *, size_t) = get_fun("ft_memcmp");
	int		(*memcmp)(const void *, const void *, size_t) = simple_memcmp;
	int		arr1[] = {0x01, 0x02, 0x03, 0x04, 0x05};
	int		arr2[] = {0x01, 0x02, 0x03, 0x04, 0x10};
	size_t	n = 5;
	int		res1;
	int		res2;

	sprintf(buff.txt, "%s: s1=%s, s2=%s, n=%lu\n", __func__, (char *)arr1, (char *)arr2, n);
	res1 = memcmp(arr1, arr2, n);
	SANDBOX(ft_memcmp(arr1, arr2, n););
	CuAssert(tc, "ft_memcmp crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_memcmp(arr1, arr2, n);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_memcmp_basic_2_2(CuTest *tc)
{
	int		(*ft_memcmp)(const void *, const void *, size_t) = get_fun("ft_memcmp");
	int		(*memcmp)(const void *, const void *, size_t) = simple_memcmp;
	int		arr1[] = {0x01, 0x02, 0x03, 0x04, 0x10};
	int		arr2[] = {0x01, 0x02, 0x03, 0x04, 0x05};
	size_t	n = 5;
	int		res1;
	int		res2;

	sprintf(buff.txt, "%s: s1=%s, s2=%s, n=%lu\n", __func__, (char *)arr1, (char *)arr2, n);
	res1 = memcmp(arr1, arr2, n);
	SANDBOX(ft_memcmp(arr1, arr2, n););
	CuAssert(tc, "ft_memcmp crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_memcmp(arr1, arr2, n);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_memcmp_byte_zero(CuTest *tc)
{
	int		(*ft_memcmp)(const void *, const void *, size_t) = get_fun("ft_memcmp");
	int		(*memcmp)(const void *, const void *, size_t) = simple_memcmp;
	int		arr1[] = {0x01, 0x02, '\0', 0x04, 0x10};
	int		arr2[] = {0x01, 0x02, '\0', 0x04, 0x05};
	size_t	n = 5;
	int		res1;
	int		res2;

	sprintf(buff.txt, "%s: s1=%s, s2=%s, n=%lu\n", __func__, (char *)arr1, (char *)arr2, n);
	res1 = memcmp(arr1, arr2, n);
	SANDBOX(ft_memcmp(arr1, arr2, n););
	CuAssert(tc, "ft_memcmp crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_memcmp(arr1, arr2, n);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_memcmp_zero_n(CuTest *tc)
{
	int		(*ft_memcmp)(const void *, const void *, size_t) = get_fun("ft_memcmp");
	int		(*memcmp)(const void *, const void *, size_t) = simple_memcmp;
	int		arr1[] = {0x01, 0x02, 0x03, 0x04, 0x10};
	int		arr2[] = {0x01, 0x02, 0x03, 0x04, 0x05};
	size_t	n = 0;
	int		res1;
	int		res2;

	sprintf(buff.txt, "%s: s1=%s, s2=%s, n=%lu\n", __func__, (char *)arr1, (char *)arr2, n);
	res1 = memcmp(arr1, arr2, n);
	SANDBOX(ft_memcmp(arr1, arr2, n););
	CuAssert(tc, "ft_memcmp crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_memcmp(arr1, arr2, n);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_memcmp_not_u_char_1(CuTest *tc)
{
	int		(*ft_memcmp)(const void *, const void *, size_t) = get_fun("ft_memcmp");
	int		(*memcmp)(const void *, const void *, size_t) = simple_memcmp;
	int		arr1[] = {0x01020304};
	int		arr2[] = {0x01, 0x02, 0x03, 0x04};
	size_t	n = 4;
	int		res1;
	int		res2;

	sprintf(buff.txt, "%s: s1=%s, s2=%s, n=%lu\n", __func__, (char *)arr1, (char *)arr2, n);
	res1 = memcmp(arr1, arr2, n);
	SANDBOX(ft_memcmp(arr1, arr2, n););
	CuAssert(tc, "ft_memcmp crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_memcmp(arr1, arr2, n);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_memcmp_not_u_char_2(CuTest *tc)
{
	int		(*ft_memcmp)(const void *, const void *, size_t) = get_fun("ft_memcmp");
	int		(*memcmp)(const void *, const void *, size_t) = simple_memcmp;
	int		arr1[] = {0x01, 0x02, 0x03, 0x04};
	int		arr2[] = {0x01020304};
	size_t	n = 4;
	int		res1;
	int		res2;

	sprintf(buff.txt, "%s: s1=%s, s2=%s, n=%lu\n", __func__, (char *)arr1, (char *)arr2, n);
	res1 = memcmp(arr1, arr2, n);
	SANDBOX(ft_memcmp(arr1, arr2, n););
	CuAssert(tc, "ft_memcmp crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_memcmp(arr1, arr2, n);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_memcmp_null_s1(CuTest *tc)
{
	int		(*ft_memcmp)(const void *, const void *, size_t) = get_fun("ft_memcmp");
	int		*arr1 = NULL;
	int		arr2[] = {0x01, 0x02, 0x03, 0x04, 0x05};
	size_t	n = 5;

	sprintf(buff.txt, "%s: s1=%s, s2=%s, n=%lu\n", __func__, (char *)arr1, (char *)arr2, n);
	SANDBOX(ft_memcmp(arr1, arr2, n););
	CuAssert(tc, "ft_memcmp doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

void	test_ft_memcmp_null_s2(CuTest *tc)
{
	int		(*ft_memcmp)(const void *, const void *, size_t) = get_fun("ft_memcmp");
	int		arr1[] = {0x01, 0x02, 0x03, 0x04, 0x05};
	int		*arr2 = NULL;
	size_t	n = 5;

	sprintf(buff.txt, "%s: s1=%s, s2=%s, n=%lu\n", __func__, (char *)arr1, (char *)arr2, n);
	SANDBOX(ft_memcmp(arr1, arr2, n););
	CuAssert(tc, "ft_memcmp doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

void	test_ft_memcmp_null_s1_and_s2_1(CuTest *tc)
{
	int		(*ft_memcmp)(const void *, const void *, size_t) = get_fun("ft_memcmp");
	int		*arr1 = NULL;
	int		*arr2 = NULL;
	size_t	n = 5;

	sprintf(buff.txt, "%s: s1=%s, s2=%s, n=%lu\n", __func__, (char *)arr1, (char *)arr2, n);
	SANDBOX(ft_memcmp(arr1, arr2, n););
	CuAssert(tc, "ft_memcmp doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

void	test_ft_memcmp_null_s1_and_s2_2(CuTest *tc)
{
	int		(*ft_memcmp)(const void *, const void *, size_t) = get_fun("ft_memcmp");
	int		*arr1 = NULL;
	int		*arr2 = NULL;
	size_t	n = 0;
	int		res;

	sprintf(buff.txt, "%s: s1=%s, s2=%s, n=%lu\n", __func__, (char *)arr1, (char *)arr2, n);
	SANDBOX(ft_memcmp(arr1, arr2, n););
	CuAssert(tc, "ft_memcmp crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res = ft_memcmp(arr1, arr2, n);
	CuAssertIntEquals(tc, 0, res);
}

CuSuite	*ft_memcmp_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_memcmp_basic_1);
	SUITE_ADD_TEST(s, test_ft_memcmp_basic_2_1);
	SUITE_ADD_TEST(s, test_ft_memcmp_basic_2_2);
	SUITE_ADD_TEST(s, test_ft_memcmp_byte_zero);
	SUITE_ADD_TEST(s, test_ft_memcmp_zero_n);
	SUITE_ADD_TEST(s, test_ft_memcmp_not_u_char_1);
	SUITE_ADD_TEST(s, test_ft_memcmp_not_u_char_2);
	SUITE_ADD_TEST(s, test_ft_memcmp_null_s1);
	SUITE_ADD_TEST(s, test_ft_memcmp_null_s2);
	SUITE_ADD_TEST(s, test_ft_memcmp_null_s1_and_s2_1);
	SUITE_ADD_TEST(s, test_ft_memcmp_null_s1_and_s2_2);
	return (s);
}

/****************************/
/*        FT_STRNSTR        */
/****************************/

void	test_ft_strnstr_basic(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	big[] = "TRIPLE MONSTRE (COUCOU)";
	char	little[] = "MON";
	size_t	len = strlen(big);
	char	*res1;
	char	*res2;

	printf("\n########## FT_STRNSTR ##########\n");
	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	res1 = strnstr(big, little, len);
	SANDBOX(ft_strnstr(big, little, len););
	CuAssert(tc, "ft_strnstr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strnstr(big, little, len);
	CuAssertStrEquals(tc, res1, res2);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_strnstr_little_not_in_big(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	big[] = "TRIPLE MONSTRE (COUCOU)";
	char	little[] = "DOUBLE";
	size_t	len = strlen(big);
	char	*res1;
	char	*res2;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	res1 = strnstr(big, little, len);
	SANDBOX(ft_strnstr(big, little, len););
	CuAssert(tc, "ft_strnstr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strnstr(big, little, len);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_strnstr_len_of_little(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	big[] = "TRIPLE MONSTRE (COUCOU)";
	char	little[] = "MONSTRE (COUCOU)";
	size_t	len = strlen(little);
	char	*res1;
	char	*res2;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	res1 = strnstr(big, little, len);
	/* SANDBOX(ft_strnstr(big, little, len);); */
	CuAssert(tc, "ft_strnstr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strnstr(big, little, len);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_strnstr_smaller_len(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	big[] = "TRIPLE MONSTRE (COUCOU)";
	char	little[] = "COUCOU";
	size_t	len = 16;
	char	*res1;
	char	*res2;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	res1 = strnstr(big, little, len);
	SANDBOX(ft_strnstr(big, little, len););
	CuAssert(tc, "ft_strnstr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strnstr(big, little, len);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_strnstr_bigger_len(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	big[] = "TRIPLE MONSTRE (COUCOU)";
	char	little[] = "TRIPLES";
	size_t	len = 160;
	char	*res1;
	char	*res2;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	res1 = strnstr(big, little, len);
	SANDBOX(ft_strnstr(big, little, len););
	CuAssert(tc, "ft_strnstr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strnstr(big, little, len);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_strnstr_len_zero(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	big[] = "TRIPLE MONSTRE (COUCOU)";
	char	little[] = "TRIPLE";
	size_t	len = 0;
	char	*res1;
	char	*res2;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	res1 = strnstr(big, little, len);
	SANDBOX(ft_strnstr(big, little, len););
	CuAssert(tc, "ft_strnstr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strnstr(big, little, len);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_strnstr_empty_big(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	big[] = "";
	char	little[] = "TRIPLE";
	size_t	len = 16;
	char	*res1;
	char	*res2;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	res1 = strnstr(big, little, len);
	SANDBOX(ft_strnstr(big, little, len););
	CuAssert(tc, "ft_strnstr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strnstr(big, little, len);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_strnstr_empty_little(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	big[] = "TRIPLE MONSTRE (COUCOU)";
	char	little[] = "";
	size_t	len = strlen(big);
	char	*res1;
	char	*res2;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	res1 = strnstr(big, little, len);
	SANDBOX(ft_strnstr(big, little, len););
	CuAssert(tc, "ft_strnstr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strnstr(big, little, len);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_strnstr_empty_big_and_little(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	big[] = "";
	char	little[] = "";
	size_t	len = 16;
	char	*res1;
	char	*res2;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	res1 = strnstr(big, little, len);
	SANDBOX(ft_strnstr(big, little, len););
	CuAssert(tc, "ft_strnstr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strnstr(big, little, len);
	CuAssertPtrEquals(tc, res1, res2);
}

void	test_ft_strnstr_null_big_1(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	*big = NULL;
	char	little[] = "TRIPLE";
	size_t	len = 16;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	SANDBOX(ft_strnstr(big, little, len););
	CuAssert(tc, "ft_strnstr doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

void	test_ft_strnstr_null_big_2(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	*big = NULL;
	char	little[] = "TRIPLE";
	size_t	len = 0;
	char	*res;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	SANDBOX(ft_strnstr(big, little, len););
	CuAssert(tc, "ft_strnstr crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res = ft_strnstr(big, little, len);
	CuAssertStrEquals(tc, NULL, res);
	CuAssertPtrEquals(tc, NULL, res);
}

void	test_ft_strnstr_null_little_1(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	big[] = "TRIPLE MONSTRE (COUCOU)";
	char	*little = NULL;
	size_t	len = 16;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	SANDBOX(ft_strnstr(big, little, len););
	CuAssert(tc, "ft_strnstr doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

void	test_ft_strnstr_null_little_2(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	big[] = "TRIPLE MONSTRE (COUCOU)";
	char	*little = NULL;
	size_t	len = 0;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	SANDBOX(ft_strnstr(big, little, len););
	CuAssert(tc, "ft_strnstr doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

void	test_ft_strnstr_null_big_and_little_1(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	*big = NULL;
	char	*little = NULL;
	size_t	len = 16;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	SANDBOX(ft_strnstr(big, little, len););
	CuAssert(tc, "ft_strnstr doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

void	test_ft_strnstr_null_big_and_little_2(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	*big = NULL;
	char	*little = NULL;
	size_t	len = 0;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	SANDBOX(ft_strnstr(big, little, len););
	CuAssert(tc, "ft_strnstr doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

CuSuite	*ft_strnstr_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_strnstr_basic);
	SUITE_ADD_TEST(s, test_ft_strnstr_little_not_in_big);
	SUITE_ADD_TEST(s, test_ft_strnstr_len_of_little);
	SUITE_ADD_TEST(s, test_ft_strnstr_smaller_len);
	SUITE_ADD_TEST(s, test_ft_strnstr_bigger_len);
	SUITE_ADD_TEST(s, test_ft_strnstr_len_zero);
	SUITE_ADD_TEST(s, test_ft_strnstr_empty_big);
	SUITE_ADD_TEST(s, test_ft_strnstr_empty_little);
	SUITE_ADD_TEST(s, test_ft_strnstr_empty_big_and_little);
	SUITE_ADD_TEST(s, test_ft_strnstr_null_big_1);
	SUITE_ADD_TEST(s, test_ft_strnstr_null_big_2);
	SUITE_ADD_TEST(s, test_ft_strnstr_null_little_1);
	SUITE_ADD_TEST(s, test_ft_strnstr_null_little_2);
	SUITE_ADD_TEST(s, test_ft_strnstr_null_big_and_little_1);
	SUITE_ADD_TEST(s, test_ft_strnstr_null_big_and_little_2);
	return (s);
}

/****************************/
/*          FT_ATOI         */
/****************************/

void	test_ft_atoi_basic(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "123";

	printf("\n########### FT_ATOI ###########\n");
	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	CuAssertIntEquals(tc, 123, ft_atoi(nptr));
}

void	test_ft_atoi_negative(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "-123";

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	CuAssertIntEquals(tc, -123, ft_atoi(nptr));
}

void	test_ft_atoi_positive(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "+123";

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	CuAssertIntEquals(tc, 123, ft_atoi(nptr));
}

void	test_ft_atoi_multiple_signs(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "+++---+123";

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	CuAssertIntEquals(tc, 0, ft_atoi(nptr));
}

void	test_ft_atoi_whitespaces_1(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = " \t\t\n -123";

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	CuAssertIntEquals(tc, -123, ft_atoi(nptr));
}

void	test_ft_atoi_whitespaces_2(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "- \t123";

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	CuAssertIntEquals(tc, 0, ft_atoi(nptr));
}

void	test_ft_atoi_whitespaces_3(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "-12\t453";

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	CuAssertIntEquals(tc, -12, ft_atoi(nptr));
}

void	test_ft_atoi_int_min(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "-2147483648";

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	CuAssertIntEquals(tc, -2147483648, ft_atoi(nptr));
}

void	test_ft_atoi_int_max(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "2147483647";

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	CuAssertIntEquals(tc, 2147483647, ft_atoi(nptr));
}

void	test_ft_atoi_too_big_int(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "21474836478";

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	CuAssertIntEquals(tc, -2, ft_atoi(nptr));
}

void	test_ft_atoi_uint(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "4294967293";

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	CuAssertIntEquals(tc, -3, ft_atoi(nptr));
}

void	test_ft_atoi_empty(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "";

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	CuAssertIntEquals(tc, 0, ft_atoi(nptr));
}

void	test_ft_atoi_null(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	*nptr = NULL;

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

CuSuite	*ft_atoi_get_suite()
{
	CuSuite *s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_atoi_basic);
	SUITE_ADD_TEST(s, test_ft_atoi_negative);
	SUITE_ADD_TEST(s, test_ft_atoi_positive);
	SUITE_ADD_TEST(s, test_ft_atoi_multiple_signs);
	SUITE_ADD_TEST(s, test_ft_atoi_whitespaces_1);
	SUITE_ADD_TEST(s, test_ft_atoi_whitespaces_2);
	SUITE_ADD_TEST(s, test_ft_atoi_whitespaces_3);
	SUITE_ADD_TEST(s, test_ft_atoi_int_min);
	SUITE_ADD_TEST(s, test_ft_atoi_int_max);
	SUITE_ADD_TEST(s, test_ft_atoi_too_big_int);
	SUITE_ADD_TEST(s, test_ft_atoi_uint);
	SUITE_ADD_TEST(s, test_ft_atoi_empty);
	SUITE_ADD_TEST(s, test_ft_atoi_null);
	return (s);
}

/****************************/
/*         FT_CALLOC        */
/****************************/

void	test_ft_calloc_allocation(CuTest *tc)
{
	void	*(*ft_calloc)(size_t, size_t) = get_fun("ft_calloc");
	size_t	nmemb;
	size_t	size;
	void	*ptr;

	nmemb = 23;
	size = 1;
	printf("\n########### FT_CALLOC ##########\n");
	sprintf(buff.txt, "%s: nmemb=%lu, size=%lu\n", __func__, nmemb, size);
	SANDBOX(
		ptr = ft_calloc(nmemb, size);
		free(ptr);
		);
	CuAssert(tc, "ft_calloc fails with basic nmemb & size.", !WIFSIGNALED(g_exit_code));
}

void	test_ft_calloc_check_size(CuTest *tc)
{
	void	*(*ft_calloc)(size_t, size_t) = get_fun("ft_calloc");
	size_t	nmemb;
	size_t	size;
	int		*ptr;

	nmemb = 5;
	size = sizeof(int);
	sprintf(buff.txt, "%s: nmemb=%lu, size=%lu\n", __func__, nmemb, size);
	SANDBOX(
		ptr = (int *)ft_calloc(nmemb, size);
		free(ptr);
		);
	CuAssert(tc, "ft_calloc fails with basic nmemb & size.", !WIFSIGNALED(g_exit_code));
	ptr = (int *)ft_calloc(nmemb, size);
	/* sprintf(buff.txt, "last malloc size = %lu\n", g_last_malloc_size); */
	CuAssert(tc, "ft_calloc doesn't allocate the correct size.",
			 g_last_malloc_size == size * nmemb);
	free(ptr);
}

void	test_ft_calloc_malloc_protection(CuTest *tc)
{
	void	*(*ft_calloc)(size_t, size_t) = get_fun("ft_calloc");
	size_t	nmemb;
	size_t	size;
	int		*ptr;

	nmemb = 5;
	size = sizeof(int);
	sprintf(buff.txt, "%s: nmemb=%lu, size=%lu\n", __func__, nmemb, size);
	SANDBOX(
		FAIL_MALLOC;
		ptr = ft_calloc(nmemb, size);
		END_FAIL;
		if (ptr)
			free(ptr);
		);
	CuAssert(tc, "ft_calloc fails when malloc fails.", !WIFSIGNALED(g_exit_code));
	FAIL_MALLOC;
	ptr = ft_calloc(nmemb, size);
	END_FAIL;
	if (ptr)
		free(ptr);
	CuAssert(tc, "ft_calloc doesn't protect malloc.", ptr == NULL);
}

void	test_ft_calloc_zero(CuTest *tc)
{
	void	*(*ft_calloc)(size_t, size_t) = get_fun("ft_calloc");
	size_t	nmemb;
	size_t	size;
	int		*ptr;

	nmemb = 0;
	size = 0;
	sprintf(buff.txt, "%s: nmemb=%lu, size=%lu\n", __func__, nmemb, size);
	SANDBOX(
		ptr = (int *)ft_calloc(nmemb, size);
		if (ptr)
			free(ptr);
		);
	CuAssert(tc, "ft_calloc crash when params are 0.", !WIFSIGNALED(g_exit_code));
	ptr = (int *)ft_calloc(nmemb, size);
	if (ptr)
		free(ptr);
	CuAssert(tc, "ft_calloc doesn't work with 0 as params.", ptr != NULL);
}

void	test_ft_calloc_big_nums(CuTest *tc)
{
	void	*(*ft_calloc)(size_t, size_t) = get_fun("ft_calloc");
	size_t	nmemb1;
	size_t	size1;
	int		*ptr;

	nmemb1 = ULONG_MAX;
	size1 = 1;
	sprintf(buff.txt, "%s: nmemb=%lu, size=%lu\n", __func__, nmemb1, size1);
	SANDBOX(
		ptr = ft_calloc(nmemb1, size1);
		if (ptr)
			free(ptr);
		);
	CuAssert(tc, "ft_calloc crash with big number.", !WIFSIGNALED(g_exit_code));
	ptr = ft_calloc(nmemb1, size1);
	if (ptr)
		free(ptr);
	CuAssertPtrEquals(tc, NULL, ptr);
}

CuSuite	*ft_calloc_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_calloc_allocation);
	SUITE_ADD_TEST(s, test_ft_calloc_check_size);
	SUITE_ADD_TEST(s, test_ft_calloc_malloc_protection);
	SUITE_ADD_TEST(s, test_ft_calloc_zero);
	SUITE_ADD_TEST(s, test_ft_calloc_big_nums);
	return (s);
}

/****************************/
/*         FT_STRDUP        */
/****************************/

void	test_ft_strdup_basic(CuTest *tc)
{
	char	*(*ft_strdup)(const char *) = get_fun("ft_strdup");
	char	s[] = "TRIple Mooonstre!!! COUCOU";
	char	*res;

	printf("\n########### FT_STRDUP ##########\n");
	sprintf(buff.txt, "%s: s = <%s>\n", __func__, s);
	SANDBOX(res = ft_strdup(s);free(res));
	CuAssert(tc, "ft_strdup crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res = ft_strdup(s);
	CuAssertStrEquals(tc, "TRIple Mooonstre!!! COUCOU", res);
	CuAssertIntEquals_Msg(tc, "Incorrect malloc size", 27, g_last_malloc_size);
	if (res)
		free(res);
}

void	test_ft_strdup_malloc_fail(CuTest *tc)
{
	char	*(*ft_strdup)(const char *) = get_fun("ft_strdup");
	char	s[] = "TRIple Mooonstre!!! COUCOU";
	char	*res;

	sprintf(buff.txt, "%s: s = <%s>\n", __func__, s);
	SANDBOX(
		FAIL_MALLOC;
		res = ft_strdup(s);
		END_FAIL;
		if(res)
			free(res)
		);
	CuAssert(tc, "ft_strdup crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	FAIL_MALLOC;
	res = ft_strdup(s);
	END_FAIL;
	CuAssertPtrEquals(tc, NULL, res);
	if (res)
		free(res);
}

void	test_ft_strdup_empty_s(CuTest *tc)
{
	char	*(*ft_strdup)(const char *) = get_fun("ft_strdup");
	char	s[] = "";
	char	*res;

	sprintf(buff.txt, "%s: s = <%s>\n", __func__, s);
	SANDBOX(
		res = ft_strdup(s);
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strdup crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res = ft_strdup(s);
	CuAssertStrEquals(tc, "", res);
	CuAssertIntEquals_Msg(tc, "Incorrect malloc size", 1, g_last_malloc_size);
	if (res)
		free(res);
}

void	test_ft_strdup_null_s(CuTest *tc)
{
	char	*(*ft_strdup)(const char *) = get_fun("ft_strdup");
	char	*s = NULL;
	char	*res2;

	sprintf(buff.txt, "%s: s = <%s>\n", __func__, s);
	SANDBOX(
		res2 = ft_strdup(s);
		if (res2)
			free(res2);
		);
	CuAssert(tc, "ft_strdup doesn't crash when it should.", WIFSIGNALED(g_exit_code));
}

CuSuite	*ft_strdup_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_strdup_basic);
	SUITE_ADD_TEST(s, test_ft_strdup_malloc_fail);
	SUITE_ADD_TEST(s, test_ft_strdup_empty_s);
	SUITE_ADD_TEST(s, test_ft_strdup_null_s);
	return (s);
}

/*********************************** PART 2 ***********************************/

/****************************/
/*         FT_SUBSTR        */
/****************************/

void	test_ft_substr_basic(CuTest *tc)
{
	char	*(*ft_substr)(char const *, unsigned int, size_t) = get_fun("ft_substr");
	char			s[] = "Hello everyone here!";
	unsigned int	start = 6;
	size_t			len = 8;
	char			*res;

	printf("\n########### FT_SUBSTR ##########\n");
	sprintf(buff.txt, "%s: s=<%s>, start=%u, len=%lu\n", __func__, s, start, len);
	SANDBOX(
		res = ft_substr(s, start, len);
		if (res)
			free(res);
		);
	CuAssert(tc, "CRASH of ft_substr.", !WIFSIGNALED(g_exit_code));
	res = ft_substr(s, start, len);
	CuAssert(tc, "Wrong allocated size", g_last_malloc_size == 9);
	CuAssertStrEquals(tc, "everyone", res);
	if (res)
		free(res);
}

void	test_ft_substr_all_s(CuTest *tc)
{
	char	*(*ft_substr)(char const *, unsigned int, size_t) = get_fun("ft_substr");
	char			s[] = "Hello everyone here!";
	unsigned int	start = 0;
	size_t			len = strlen(s);
	char			*res;

	sprintf(buff.txt, "%s: s=<%s>, start=%u, len=%lu\n", __func__, s, start, len);
	SANDBOX(
		res = ft_substr(s, start, len);
		if (res)
			free(res);
		);
	CuAssert(tc, "CRASH of ft_substr.", !WIFSIGNALED(g_exit_code));
	res = ft_substr(s, start, len);
	CuAssert(tc, "Wrong allocated size", g_last_malloc_size == strlen(s) + 1);
	CuAssertStrEquals(tc, "Hello everyone here!", res);
	if (res)
		free(res);
}

void	test_ft_substr_big_len(CuTest *tc)
{
	char	*(*ft_substr)(char const *, unsigned int, size_t) = get_fun("ft_substr");
	char			s[] = "Hello everyone here!";
	unsigned int	start = 6;
	size_t			len = 20;
	char			*res;

	sprintf(buff.txt, "%s: s=<%s>, start=%u, len=%lu\n", __func__, s, start, len);
	SANDBOX(
		res = ft_substr(s, start, len);
		if (res)
			free(res);
		);
	CuAssert(tc, "CRASH of ft_substr.", !WIFSIGNALED(g_exit_code));
	res = ft_substr(s, start, len);
	CuAssertIntEquals_Msg(tc, "Wrong allocated size", 15, g_last_malloc_size);
	CuAssertStrEquals(tc, "everyone here!", res);
	if (res)
		free(res);
}

void	test_ft_substr_len_zero(CuTest *tc)
{
	char	*(*ft_substr)(char const *, unsigned int, size_t) = get_fun("ft_substr");
	char			s[] = "Hello everyone here!";
	unsigned int	start = 6;
	size_t			len = 0;
	char			*res;

	sprintf(buff.txt, "%s: s=<%s>, start=%u, len=%lu\n", __func__, s, start, len);
	SANDBOX(
		res = ft_substr(s, start, len);
		if (res)
			free(res);
		);
	CuAssert(tc, "CRASH of ft_substr.", !WIFSIGNALED(g_exit_code));
	res = ft_substr(s, start, len);
	CuAssert(tc, "Wrong allocated size", g_last_malloc_size == 1);
	CuAssertStrEquals(tc, "", res);
	if (res)
		free(res);
}

void	test_ft_substr_start_gt_len_s(CuTest *tc)
{
	char	*(*ft_substr)(char const *, unsigned int, size_t) = get_fun("ft_substr");
	char			s[] = "Hello everyone here!";
	unsigned int	start = strlen(s) + 2;
	size_t			len = 5;
	char			*res;

	sprintf(buff.txt, "%s: s=<%s>, start=%u, len=%lu\n", __func__, s, start, len);
	SANDBOX(
		res = ft_substr(s, start, len);
		if (res)
			free(res);
		);
	CuAssert(tc, "CRASH of ft_substr.", !WIFSIGNALED(g_exit_code));
	res = ft_substr(s, start, len);
	CuAssert(tc, "Wrong allocated size", g_last_malloc_size == 1);
	CuAssertStrEquals(tc, "", res);
	if (res)
		free(res);
}

void	test_ft_substr_start_eq_len_s(CuTest *tc)
{
	char	*(*ft_substr)(char const *, unsigned int, size_t) = get_fun("ft_substr");
	char			s[] = "Hello everyone here!";
	unsigned int	start = strlen(s);
	size_t			len = 5;
	char			*res;

	sprintf(buff.txt, "%s: s=<%s>, start=%u, len=%lu\n", __func__, s, start, len);
	SANDBOX(
		res = ft_substr(s, start, len);
		if (res)
			free(res);
		);
	CuAssert(tc, "CRASH of ft_substr.", !WIFSIGNALED(g_exit_code));
	res = ft_substr(s, start, len);
	CuAssert(tc, "Wrong allocated size", g_last_malloc_size == 1);
	CuAssertStrEquals(tc, "", res);
	if (res)
		free(res);
}

void	test_ft_substr_empty_s(CuTest *tc)
{
	char	*(*ft_substr)(char const *, unsigned int, size_t) = get_fun("ft_substr");
	char			s[] = "";
	unsigned int	start = 0;
	size_t			len = 1;
	char			*res;

	sprintf(buff.txt, "%s: s=<%s>, start=%u, len=%lu\n", __func__, s, start, len);
	SANDBOX(
		res = ft_substr(s, start, len);
		if (res)
			free(res);
		);
	CuAssert(tc, "CRASH of ft_substr.", !WIFSIGNALED(g_exit_code));
	res = ft_substr(s, start, len);
	CuAssert(tc, "Wrong allocated size", g_last_malloc_size == 1);
	CuAssertStrEquals(tc, "", res);
	if (res)
		free(res);
}

void	test_ft_substr_NULL_s(CuTest *tc)
{
	char	*(*ft_substr)(char const *, unsigned int, size_t) = get_fun("ft_substr");
	char			*s = NULL;
	unsigned int	start = 0;
	size_t			len = 10;
	char			*res;

	sprintf(buff.txt, "%s: s=<%s>, start=%u, len=%lu\n", __func__, s, start, len);
	SANDBOX(
		res = ft_substr(s, start, len);
		if (res)
			free(res);
		);
	CuAssert(tc, "CRASH of ft_substr.", !WIFSIGNALED(g_exit_code));
	res = ft_substr(s, start, len);
	CuAssertStrEquals(tc, NULL, res);
	if (res)
		free(res);
}

void	test_ft_substr_malloc_fail(CuTest *tc)
{
	char	*(*ft_substr)(char const *, unsigned int, size_t) = get_fun("ft_substr");
	char			s[] = "Hello everyone here!";
	unsigned int	start = 0;
	size_t			len = 5;
	char			*res;

	sprintf(buff.txt, "%s: s=<%s>, start=%u, len=%lu\n", __func__, s, start, len);
	SANDBOX(
		FAIL_MALLOC;
		res = ft_substr(s, start, len);
		END_FAIL;
		if (res)
			free(res);
		);
	CuAssert(tc, "CRASH of ft_substr.", !WIFSIGNALED(g_exit_code));
	FAIL_MALLOC;
	res = ft_substr(s, start, len);
	END_FAIL;
	CuAssertStrEquals(tc, NULL, res);
	if (res)
		free(res);
}

CuSuite	*ft_substr_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_substr_basic);
	SUITE_ADD_TEST(s, test_ft_substr_all_s);
	SUITE_ADD_TEST(s, test_ft_substr_big_len);
	SUITE_ADD_TEST(s, test_ft_substr_len_zero);
	SUITE_ADD_TEST(s, test_ft_substr_start_gt_len_s);
	SUITE_ADD_TEST(s, test_ft_substr_start_eq_len_s);
	SUITE_ADD_TEST(s, test_ft_substr_empty_s);
	SUITE_ADD_TEST(s, test_ft_substr_NULL_s);
	SUITE_ADD_TEST(s, test_ft_substr_malloc_fail);
	return (s);
}

/****************************/
/*         FT_STRJOIN       */
/****************************/

void	test_ft_strjoin_basic(CuTest *tc)
{
	char	*(*ft_strjoin)(char const *, char const *) = get_fun("ft_strjoin");
	char	s1[] = "Hello";
	char	s2[] = " everyone !";
	char	*res;

	printf("\n########## FT_STRJOIN ##########\n");
	sprintf(buff.txt, "%s: s1=<%s>, s2=<%s>\n", __func__, s1, s2);
	SANDBOX(
		res = ft_strjoin(s1, s2);
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strjoin CRASH when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res = ft_strjoin(s1, s2);
	CuAssertIntEquals_Msg(tc, "Bad allocation size.", 17, g_last_malloc_size);
	CuAssertStrEquals(tc, "Hello everyone !", res);
	if (res)
		free(res);
}

void	test_ft_strjoin_malloc_fail(CuTest *tc)
{
	char	*(*ft_strjoin)(char const *, char const *) = get_fun("ft_strjoin");
	char	s1[] = "Hello";
	char	s2[] = " everyone !";
	char	*res;

	sprintf(buff.txt, "%s: s1=<%s>, s2=<%s>\n", __func__, s1, s2);
	SANDBOX(
		FAIL_MALLOC;
		res = ft_strjoin(s1, s2);
		END_FAIL;
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strjoin CRASH when it shouldn't.", !WIFSIGNALED(g_exit_code));
	FAIL_MALLOC;
	res = ft_strjoin(s1, s2);
	END_FAIL;
	CuAssertStrEquals(tc, NULL, res);
	if (res)
		free(res);
}

void	test_ft_strjoin_empty_s1(CuTest *tc)
{
	char	*(*ft_strjoin)(char const *, char const *) = get_fun("ft_strjoin");
	char	s1[] = "";
	char	s2[] = " everyone !";
	char	*res;

	sprintf(buff.txt, "%s: s1=<%s>, s2=<%s>\n", __func__, s1, s2);
	SANDBOX(
		res = ft_strjoin(s1, s2);
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strjoin CRASH when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res = ft_strjoin(s1, s2);
	CuAssertIntEquals_Msg(tc, "Bad allocation size.", 12, g_last_malloc_size);
	CuAssertStrEquals(tc, " everyone !", res);
	if (res)
		free(res);
}

void	test_ft_strjoin_empty_s2(CuTest *tc)
{
	char	*(*ft_strjoin)(char const *, char const *) = get_fun("ft_strjoin");
	char	s1[] = "Hello";
	char	s2[] = "";
	char	*res;

	sprintf(buff.txt, "%s: s1=<%s>, s2=<%s>\n", __func__, s1, s2);
	SANDBOX(
		res = ft_strjoin(s1, s2);
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strjoin CRASH when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res = ft_strjoin(s1, s2);
	CuAssertIntEquals_Msg(tc, "Bad allocation size.", 6, g_last_malloc_size);
	CuAssertStrEquals(tc, "Hello", res);
	if (res)
		free(res);
}

void	test_ft_strjoin_empty_s1_and_s2(CuTest *tc)
{
	char	*(*ft_strjoin)(char const *, char const *) = get_fun("ft_strjoin");
	char	s1[] = "";
	char	s2[] = "";
	char	*res;

	sprintf(buff.txt, "%s: s1=<%s>, s2=<%s>\n", __func__, s1, s2);
	SANDBOX(
		res = ft_strjoin(s1, s2);
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strjoin CRASH when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res = ft_strjoin(s1, s2);
	CuAssertIntEquals_Msg(tc, "Bad allocation size.", 1, g_last_malloc_size);
	CuAssertStrEquals(tc, "", res);
	if (res)
		free(res);
}

void	test_ft_strjoin_null_s1(CuTest *tc)
{
	char	*(*ft_strjoin)(char const *, char const *) = get_fun("ft_strjoin");
	char	*s1 = NULL;
	char	s2[] = " everyone !";
	char	*res;

	sprintf(buff.txt, "%s: s1=<%s>, s2=<%s>\n", __func__, s1, s2);
	SANDBOX(
		res = ft_strjoin(s1, s2);
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strjoin CRASH when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res = ft_strjoin(s1, s2);
	CuAssertStrEquals(tc, NULL, res);
	if (res)
		free(res);
}

void	test_ft_strjoin_null_s2(CuTest *tc)
{
	char	*(*ft_strjoin)(char const *, char const *) = get_fun("ft_strjoin");
	char	s1[] = "Hello";
	char	*s2 = NULL;
	char	*res;

	sprintf(buff.txt, "%s: s1=<%s>, s2=<%s>\n", __func__, s1, s2);
	SANDBOX(
		res = ft_strjoin(s1, s2);
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strjoin CRASH when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res = ft_strjoin(s1, s2);
	CuAssertStrEquals(tc, NULL, res);
	if (res)
		free(res);
}

void	test_ft_strjoin_null_s1_and_s2(CuTest *tc)
{
	char	*(*ft_strjoin)(char const *, char const *) = get_fun("ft_strjoin");
	char	*s1 = NULL;
	char	*s2 = NULL;
	char	*res;

	sprintf(buff.txt, "%s: s1=<%s>, s2=<%s>\n", __func__, s1, s2);
	SANDBOX(
		res = ft_strjoin(s1, s2);
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strjoin CRASH when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res = ft_strjoin(s1, s2);
	CuAssertStrEquals(tc, NULL, res);
	if (res)
		free(res);
}

CuSuite	*ft_strjoin_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_strjoin_basic);
	SUITE_ADD_TEST(s, test_ft_strjoin_malloc_fail);
	SUITE_ADD_TEST(s, test_ft_strjoin_empty_s1);
	SUITE_ADD_TEST(s, test_ft_strjoin_empty_s2);
	SUITE_ADD_TEST(s, test_ft_strjoin_empty_s1_and_s2);
	SUITE_ADD_TEST(s, test_ft_strjoin_null_s1);
	SUITE_ADD_TEST(s, test_ft_strjoin_null_s2);
	SUITE_ADD_TEST(s, test_ft_strjoin_null_s1_and_s2);
	return (s);
}

/****************************/
/*         FT_STRTRIM       */
/****************************/

void	test_ft_strtrim_basic_1(CuTest *tc)
{
	char	*(*ft_strtrim)(char const *, char const *) = get_fun("ft_strtrim");
	char	s1[] = "  zzz Hello everyone! zz";
	char	set[] = "z ";
	char	*res;

	printf("\n########## FT_STRTRIM ##########\n");
	sprintf(buff.txt, "%s: s1=<%s>, set=<%s>\n", __func__, s1, set);
	SANDBOX(
		res = ft_strtrim(s1, set);
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strtrim CRASH with basic inputs.", !WIFSIGNALED(g_exit_code));
	res = ft_strtrim(s1, set);
	CuAssertStrEquals(tc, "Hello everyone!", res);
	CuAssertIntEquals_Msg(tc, "Bad allocation size", 16, g_last_malloc_size);
	CuAssert(tc, "The string returned is not a copy.", res != s1);
	if (res)
		free(res);
}

void	test_ft_strtrim_basic_2(CuTest *tc)
{
	char	*(*ft_strtrim)(char const *, char const *) = get_fun("ft_strtrim");
	char	s1[] = "  zzz Hello everyone!";
	char	set[] = "z ";
	char	*res;

	sprintf(buff.txt, "%s: s1=<%s>, set=<%s>\n", __func__, s1, set);
	SANDBOX(
		res = ft_strtrim(s1, set);
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strtrim CRASH with basic inputs.", !WIFSIGNALED(g_exit_code));
	res = ft_strtrim(s1, set);
	CuAssertStrEquals(tc, "Hello everyone!", res);
	CuAssertIntEquals_Msg(tc, "Bad allocation size", 16, g_last_malloc_size);
	CuAssert(tc, "The string returned is not a copy.", res != s1);
	if (res)
		free(res);
}

void	test_ft_strtrim_basic_3(CuTest *tc)
{
	char	*(*ft_strtrim)(char const *, char const *) = get_fun("ft_strtrim");
	char	s1[] = "Hello everyone! zz";
	char	set[] = "z ";
	char	*res;

	sprintf(buff.txt, "%s: s1=<%s>, set=<%s>\n", __func__, s1, set);
	SANDBOX(
		res = ft_strtrim(s1, set);
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strtrim CRASH with basic inputs.", !WIFSIGNALED(g_exit_code));
	res = ft_strtrim(s1, set);
	CuAssertStrEquals(tc, "Hello everyone!", res);
	CuAssertIntEquals_Msg(tc, "Bad allocation size", 16, g_last_malloc_size);
	CuAssert(tc, "The string returned is not a copy.", res != s1);
	if (res)
		free(res);
}

void	test_ft_strtrim_chars_middle(CuTest *tc)
{
	char	*(*ft_strtrim)(char const *, char const *) = get_fun("ft_strtrim");
	char	s1[] = "Hello zzz everyone!";
	char	set[] = "z ";
	char	*res;

	sprintf(buff.txt, "%s: s1=<%s>, set=<%s>\n", __func__, s1, set);
	SANDBOX(
		res = ft_strtrim(s1, set);
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strtrim CRASH with chars of charset in the middle of the string.", !WIFSIGNALED(g_exit_code));
	res = ft_strtrim(s1, set);
 	CuAssertStrEquals(tc, "Hello zzz everyone!", res);
	CuAssertIntEquals_Msg(tc, "Bad allocation size", 20, g_last_malloc_size);
	CuAssert(tc, "The string returned is not a copy.", res != s1);
	if (res)
		free(res);
}

void	test_ft_strtrim_no_set_in_s1(CuTest *tc)
{
	char	*(*ft_strtrim)(char const *, char const *) = get_fun("ft_strtrim");
	char	s1[] = " yyy HeLLo everyone! yy";
	char	set[] = "bazlu";
	char	*res;

	sprintf(buff.txt, "%s: s1=<%s>, set=<%s>\n", __func__, s1, set);
	SANDBOX(
		res = ft_strtrim(s1, set);
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strtrim CRASH with no char of charset in string.", !WIFSIGNALED(g_exit_code));
	res = ft_strtrim(s1, set);
	CuAssertStrEquals(tc, " yyy HeLLo everyone! yy", res);
	CuAssertIntEquals_Msg(tc, "Bad allocation size", 24, g_last_malloc_size);
	CuAssert(tc, "The string returned is not a copy.", res != s1);
	if (res)
		free(res);
}

void	test_ft_strtrim_only_set_in_s1(CuTest *tc)
{
	char	*(*ft_strtrim)(char const *, char const *) = get_fun("ft_strtrim");
	char	s1[] = " yyy Hello everyone! yy";
	char	set[] = " yHelovrn!";
	char	*res;

	sprintf(buff.txt, "%s: s1=<%s>, set=<%s>\n", __func__, s1, set);
	SANDBOX(
		res = ft_strtrim(s1, set);
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strtrim CRASH with only chars of charset in string.", !WIFSIGNALED(g_exit_code));
	res = ft_strtrim(s1, set);
	CuAssertStrEquals(tc, "", res);
	CuAssertIntEquals_Msg(tc, "Bad allocation size", 1, g_last_malloc_size);
	CuAssert(tc, "The string returned is not a copy.", res != s1);
	if (res)
		free(res);
}

void	test_ft_strtrim_empty_set(CuTest *tc)
{
	char	*(*ft_strtrim)(char const *, char const *) = get_fun("ft_strtrim");
	char	s1[] = " Hello everyone! ";
	char	set[] = "";
	char	*res;

	sprintf(buff.txt, "%s: s1=<%s>, set=<%s>\n", __func__, s1, set);
	SANDBOX(
		res = ft_strtrim(s1, set);
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strtrim CRASH with empty set.", !WIFSIGNALED(g_exit_code));
	res = ft_strtrim(s1, set);
  	CuAssertStrEquals(tc, " Hello everyone! ", res);
	CuAssertIntEquals_Msg(tc, "Bad allocation size", 18, g_last_malloc_size);
	CuAssert(tc, "The string returned is not a copy.", res != s1);
	if (res)
		free(res);
}

void	test_ft_strtrim_empty_s1(CuTest *tc)
{
	char	*(*ft_strtrim)(char const *, char const *) = get_fun("ft_strtrim");
	char	s1[] = "";
	char	set[] = "abc ";
	char	*res;

	sprintf(buff.txt, "%s: s1=<%s>, set=<%s>\n", __func__, s1, set);
	SANDBOX(
		res = ft_strtrim(s1, set);
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strtrim CRASH with empty string.", !WIFSIGNALED(g_exit_code));
	res = ft_strtrim(s1, set);
	CuAssertStrEquals(tc, "", res);
	CuAssertIntEquals_Msg(tc, "Bad allocation size", 1, g_last_malloc_size);
	CuAssert(tc, "The string returned is not a copy.", res != s1);
	if (res)
		free(res);
}

void	test_ft_strtrim_malloc_fail(CuTest *tc)
{
	char	*(*ft_strtrim)(char const *, char const *) = get_fun("ft_strtrim");
	char	s1[] = " Hello everyone!   ";
	char	set[] = " ";
	char	*res;

	sprintf(buff.txt, "%s: s1=<%s>, set=<%s>\n", __func__, s1, set);
	SANDBOX(
		FAIL_MALLOC;
		res = ft_strtrim(s1, set);
		END_FAIL;
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strtrim CRASH when malloc fails.", !WIFSIGNALED(g_exit_code));
	FAIL_MALLOC;
	res = ft_strtrim(s1, set);
	END_FAIL;
	CuAssertStrEquals(tc, NULL, res);
	if (res)
		free(res);
}

void	test_ft_strtrim_null_s1(CuTest *tc)
{
	char	*(*ft_strtrim)(char const *, char const *) = get_fun("ft_strtrim");
	char	*s1 = NULL;
	char	set[] = " ";
	char	*res;

	sprintf(buff.txt, "%s: s1=<%s>, set=<%s>\n", __func__, s1, set);
	SANDBOX(
		res = ft_strtrim(s1, set);
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strtrim CRASH when s1 is set to NULL.", !WIFSIGNALED(g_exit_code));
	res = ft_strtrim(s1, set);
	CuAssertStrEquals(tc, NULL, res);
	if (res)
		free(res);
}

void	test_ft_strtrim_null_set(CuTest *tc)
{
	char	*(*ft_strtrim)(char const *, char const *) = get_fun("ft_strtrim");
	char	s1[] = "  Hello everyone!  ";
	char	*set = NULL;
	char	*res;

	sprintf(buff.txt, "%s: s1=<%s>, set=<%s>\n", __func__, s1, set);
	SANDBOX(
		res = ft_strtrim(s1, set);
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strtrim CRASH when set is set to NULL.", !WIFSIGNALED(g_exit_code));
	res = ft_strtrim(s1, set);
	CuAssertStrEquals(tc, NULL, res);
	if (res)
		free(res);
}

void	test_ft_strtrim_null_s1_and_set(CuTest *tc)
{
	char	*(*ft_strtrim)(char const *, char const *) = get_fun("ft_strtrim");
	char	*s1 = NULL;
	char	*set = NULL;
	char	*res;

	sprintf(buff.txt, "%s: s1=<%s>, set=<%s>\n", __func__, s1, set);
	SANDBOX(
		res = ft_strtrim(s1, set);
		if (res)
			free(res);
		);
	CuAssert(tc, "ft_strtrim CRASH when s1 & set are set to NULL.", !WIFSIGNALED(g_exit_code));
	res = ft_strtrim(s1, set);
	CuAssertStrEquals(tc, NULL, res);
	if (res)
		free(res);
}

CuSuite	*ft_strtrim_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_strtrim_basic_1);
	SUITE_ADD_TEST(s, test_ft_strtrim_basic_2);
	SUITE_ADD_TEST(s, test_ft_strtrim_basic_3);
	SUITE_ADD_TEST(s, test_ft_strtrim_chars_middle);
	SUITE_ADD_TEST(s, test_ft_strtrim_no_set_in_s1);
	SUITE_ADD_TEST(s, test_ft_strtrim_only_set_in_s1);
	SUITE_ADD_TEST(s, test_ft_strtrim_empty_set);
	SUITE_ADD_TEST(s, test_ft_strtrim_empty_s1);
	SUITE_ADD_TEST(s, test_ft_strtrim_malloc_fail);
	SUITE_ADD_TEST(s, test_ft_strtrim_null_s1);
	SUITE_ADD_TEST(s, test_ft_strtrim_null_set);
	SUITE_ADD_TEST(s, test_ft_strtrim_null_s1_and_set);
	return (s);
}

/****************************/
/*          FT_SPLIT        */
/****************************/

static void	check_split_malloc_sizes(CuTest *tc, char *ex[], char *act[])
{
	size_t	ex_size;
	size_t	act_size;
	int		i;
	char	txt[50];

	for (i = 0; ex[i]; i++) ;
	ex_size = (i + 1) * sizeof(char *);
	act_size = leaks_tracer_find_by_addr(&g_leaks, act)->size;
	CuAssertIntEquals_Msg(tc, "Wrong allocated size for array of strings.", ex_size, act_size);
	for (i = 0; act[i]; i++)
	{
		sprintf(txt, "Wrong allocated size for string of rank %d", i);
		ex_size = strlen(ex[i]) + 1;
		act_size = leaks_tracer_find_by_addr(&g_leaks, act[i])->size;
		CuAssertIntEquals_Msg(tc, txt, ex_size, act_size);
	}
}

void	test_ft_split_basic(CuTest *tc)
{
	char	**(*ft_split)(char const *, char) = get_fun("ft_split");
	char	s[] = "hello monstre! How are you?";
	char	c = ' ';
	char	**res;
	char	*expected[] = {"hello", "monstre!", "How", "are", "you?", NULL};
	int		i;

	printf("\n########### FT_SPLIT ###########\n");
	sprintf(buff.txt, "%s: s=<%s>, c=<%c>\n", __func__, s, c);
	SANDBOX(
		res = ft_split(s, c);
		if (res)
		{
			for (int i = 0; res[i]; ++i)
				free(res[i]);
			free(res);
		}
		);
	CuAssert(tc, "FT_SPLIT CRASH WITH BASIC INPUTS", !WIFSIGNALED(g_exit_code));
	LEAKS_TRACER_START;
	res = ft_split(s, c);
	CuAssertPtrNotNullMsg(tc, "ft_split returns NULL with basic inputs.", res);
	check_split_malloc_sizes(tc, expected, res);
	for (i = 0; res[i] && i < 6; ++i)
	{
		CuAssertStrEquals(tc, expected[i], res[i]);
		free(res[i]);
		res[i] = NULL;
	}
	CuAssert(tc, "Bad number of strings.", res[i] == NULL);
	free(res);
	LEAKS_TRACER_RESULT;
	CuAssert(tc, g_leaks_text, LEAKS_OK);
}

void	test_ft_split_c_around(CuTest *tc)
{
	char	**(*ft_split)(char const *, char) = get_fun("ft_split");
	char	s[] = "    hello    monstre! How are   you?    ";
	char	c = ' ';
	char	**res;
	char	*expected[] = {"hello", "monstre!", "How", "are", "you?", NULL};
	int		i;

	sprintf(buff.txt, "%s: s=<%s>, c=<%c>\n", __func__, s, c);
	SANDBOX(
		res = ft_split(s, c);
		if (res)
		{
			for (int i = 0; res[i]; ++i)
				free(res[i]);
			free(res);
		}
		);
	CuAssert(tc, "FT_SPLIT CRASH WITH BASIC INPUTS", !WIFSIGNALED(g_exit_code));
	LEAKS_TRACER_START;
	res = ft_split(s, c);
	CuAssertPtrNotNullMsg(tc, "ft_split returns NULL with basic inputs.", res);
	check_split_malloc_sizes(tc, expected, res);
	for (i = 0; res[i] && i < 6; ++i)
	{
		CuAssertStrEquals(tc, expected[i], res[i]);
		free(res[i]);
		res[i] = NULL;
	}
	CuAssert(tc, "Bad number of strings.", res[i] == NULL);
	free(res);
	LEAKS_TRACER_RESULT;
	CuAssert(tc, g_leaks_text, LEAKS_OK);
}

void	test_ft_split_no_c_in_s(CuTest *tc)
{
	char	**(*ft_split)(char const *, char) = get_fun("ft_split");
	char	s[] = "hello monstre! How are you?";
	char	c = 'z';
	char	**res;
	char	*expected[] = {"hello monstre! How are you?", NULL};
	int		i;

	sprintf(buff.txt, "%s: s=<%s>, c=<%c>\n", __func__, s, c);
	SANDBOX(
		res = ft_split(s, c);
		if (res)
		{
			for (int i = 0; res[i]; ++i)
				free(res[i]);
			free(res);
		}
		);
	CuAssert(tc, "FT_SPLIT CRASH WHEN C NOT IN S", !WIFSIGNALED(g_exit_code));
	LEAKS_TRACER_START;
	res = ft_split(s, c);
	CuAssertPtrNotNullMsg(tc, "ft_split returns NULL when c not in s.", res);
	check_split_malloc_sizes(tc, expected, res);
	for (i = 0; res[i] && i < 2; ++i)
	{
		CuAssertStrEquals(tc, expected[i], res[i]);
		free(res[i]);
		res[i] = NULL;
	}
	CuAssert(tc, "Bad number of strings.", res[i] == NULL);
	free(res);
	LEAKS_TRACER_RESULT;
	CuAssert(tc, g_leaks_text, LEAKS_OK);
}

void	test_ft_split_zero_c(CuTest *tc)
{
	char	**(*ft_split)(char const *, char) = get_fun("ft_split");
	char	s[] = "hello monstre! How are you?";
	char	c = '\0';
	char	**res;
	char	*expected[] = {"hello monstre! How are you?", NULL};
	int		i;

	sprintf(buff.txt, "%s: s=<%s>, c=<\\0>\n", __func__, s);
	SANDBOX(
		res = ft_split(s, c);
		if (res)
		{
			for (int i = 0; res[i]; ++i)
				free(res[i]);
			free(res);
		}
		);
	CuAssert(tc, "FT_SPLIT CRASH WHEN C = \\0", !WIFSIGNALED(g_exit_code));
	LEAKS_TRACER_START;
	res = ft_split(s, c);
	CuAssertPtrNotNullMsg(tc, "ft_split returns NULL when c = \\0.", res);
	check_split_malloc_sizes(tc, expected, res);
	for (i = 0; res[i] && i < 2; ++i)
	{
		CuAssertStrEquals(tc, expected[i], res[i]);
		free(res[i]);
		res[i] = NULL;
	}
	CuAssert(tc, "Bad number of strings.", res[i] == NULL);
	free(res);
	LEAKS_TRACER_RESULT;
	CuAssert(tc, g_leaks_text, LEAKS_OK);
}

void	test_ft_split_empty_s(CuTest *tc)
{
	char	**(*ft_split)(char const *, char) = get_fun("ft_split");
	char	s[] = "";
	char	c = 'e';
	char	**res;
	char	*expected[] = {NULL};
	int		i;

	sprintf(buff.txt, "%s: s=<%s>, c=<%c>\n", __func__, s, c);
	SANDBOX(
		res = ft_split(s, c);
		if (res)
		{
			for (int i = 0; res[i]; ++i)
				free(res[i]);
			free(res);
		}
		);
	CuAssert(tc, "FT_SPLIT CRASH WITH EMPTY S", !WIFSIGNALED(g_exit_code));
	LEAKS_TRACER_START;
	res = ft_split(s, c);
	CuAssertPtrNotNullMsg(tc, "ft_split returns NULL with empty s.", res);
	check_split_malloc_sizes(tc, expected, res);
	for (i = 0; res[i] && i < 2; ++i)
	{
		CuAssertStrEquals(tc, expected[i], res[i]);
		free(res[i]);
		res[i] = NULL;
	}
	CuAssert(tc, "Bad number of strings.", res[i] == NULL);
	free(res);
	LEAKS_TRACER_RESULT;
	CuAssert(tc, g_leaks_text, LEAKS_OK);
}

void	test_ft_split_malloc_fail(CuTest *tc)
{
	char	**(*ft_split)(char const *, char) = get_fun("ft_split");
	char	s[] = "hello monstre! How are you?";
	char	c = ' ';
	char	**res;

	sprintf(buff.txt, "%s: s=<%s>, c=<%c>\n", __func__, s, c);
	SANDBOX(
		FAIL_MALLOC;
		res = ft_split(s, c);
		END_FAIL;
		);
	CuAssert(tc, "FT_SPLIT CRASH WHEN MALLOC FAILS", !WIFSIGNALED(g_exit_code));
	LEAKS_TRACER_START;
	FAIL_MALLOC;
	res = ft_split(s, c);
	END_FAIL;
	LEAKS_TRACER_RESULT;
	CuAssertPtrEquals_Msg(tc, "ft_split doesn't return NULL when alloc fails.", NULL, res);
	CuAssert(tc, g_leaks_text, LEAKS_OK);
}

void	test_ft_split_malloc_fail_2(CuTest *tc)
{
	char	**(*ft_split)(char const *, char) = get_fun("ft_split");
	char	s[] = "hello monstre! How are you?";
	char	c = ' ';
	char	**res;

	sprintf(buff.txt, "%s: s=<%s>, c=<%c>\n", __func__, s, c);
	SANDBOX(
		g_malloc_fail = 3;
		res = ft_split(s, c);
		END_FAIL;
		);
	CuAssert(tc, "FT_SPLIT CRASH WHEN THIRD MALLOC FAILS", !WIFSIGNALED(g_exit_code));
	LEAKS_TRACER_START;
	g_malloc_fail = 4;
	res = ft_split(s, c);
	END_FAIL;
	LEAKS_TRACER_RESULT;
	CuAssertPtrEquals_Msg(tc, "ft_split doesn't return NULL when third alloc fails.", NULL, res);
	CuAssert(tc, g_leaks_text, LEAKS_OK);
}

void	test_ft_split_null_s(CuTest *tc)
{
	char	**(*ft_split)(char const *, char) = get_fun("ft_split");
	char	*s = NULL;
	char	c = ' ';
	char	**res;

	sprintf(buff.txt, "%s: s=<%s>, c=<%c>\n", __func__, s, c);
	SANDBOX(
		res = ft_split(s, c);
		if (res)
		{
			for (int i = 0; res[i]; ++i)
				free(res[i]);
			free(res);
		}
		);
	CuAssert(tc, "FT_SPLIT CRASH WITH NULL S", !WIFSIGNALED(g_exit_code));
	LEAKS_TRACER_START;
	res = ft_split(s, c);
	LEAKS_TRACER_RESULT;
	CuAssertPtrEquals_Msg(tc, "ft_split doesn't return NULL when s is set to NULL.", NULL, res);
	CuAssert(tc, g_leaks_text, LEAKS_OK);
}

CuSuite	*ft_split_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_split_basic);
	SUITE_ADD_TEST(s, test_ft_split_c_around);
	SUITE_ADD_TEST(s, test_ft_split_no_c_in_s);
	SUITE_ADD_TEST(s, test_ft_split_zero_c);
	SUITE_ADD_TEST(s, test_ft_split_empty_s);
	SUITE_ADD_TEST(s, test_ft_split_malloc_fail);
	SUITE_ADD_TEST(s, test_ft_split_malloc_fail_2);
	SUITE_ADD_TEST(s, test_ft_split_null_s);
	return (s);
}

/****************************/
/*          FT_ITOA         */
/****************************/

void	test_ft_itoa_basic(CuTest *tc)
{
	char	*(*ft_itoa)(int) = get_fun("ft_itoa");
	int		n = 23;
	char	*res;
	size_t	malloc_size;

	printf("\n########### FT_ITOA ###########\n");
	sprintf(buff.txt, "%s: n=<%d>\n", __func__, n);
	SANDBOX(
		res = ft_itoa(n);
		if (res)
			free(res);
		);
	CuAssert(tc, "FT_ITOA CRASH WITH BASIC INPUT", !WIFSIGNALED(g_exit_code));
	res = ft_itoa(n);
	malloc_size = g_last_malloc_size;
	CuAssertStrEquals(tc, "23", res);
	if (res)
		free(res);
	CuAssertIntEquals_Msg(tc, "Bad allocation size", 3, malloc_size);
}

void	test_ft_itoa_negative(CuTest *tc)
{
	char	*(*ft_itoa)(int) = get_fun("ft_itoa");
	int		n = -23;
	char	*res;
	size_t	malloc_size;

	sprintf(buff.txt, "%s: n=<%d>\n", __func__, n);
	SANDBOX(
		res = ft_itoa(n);
		if (res)
			free(res);
		);
	CuAssert(tc, "FT_ITOA CRASH WITH NEGATIVE NUMBER", !WIFSIGNALED(g_exit_code));
	res = ft_itoa(n);
	malloc_size = g_last_malloc_size;
	CuAssertStrEquals(tc, "-23", res);
	if (res)
		free(res);
	CuAssertIntEquals_Msg(tc, "Bad allocation size", 4, malloc_size);
}

void	test_ft_itoa_max_int(CuTest *tc)
{
	char	*(*ft_itoa)(int) = get_fun("ft_itoa");
	int		n = 2147483647;
	char	*res;
	size_t	malloc_size;

	sprintf(buff.txt, "%s: n=<%d>\n", __func__, n);
	SANDBOX(
		res = ft_itoa(n);
		if (res)
			free(res);
		);
	CuAssert(tc, "FT_ITOA CRASH WITH MAX INT", !WIFSIGNALED(g_exit_code));
	res = ft_itoa(n);
	malloc_size = g_last_malloc_size;
	CuAssertStrEquals(tc, "2147483647", res);
	if (res)
		free(res);
	CuAssertIntEquals_Msg(tc, "Bad allocation size", 11, malloc_size);
}

void	test_ft_itoa_min_int(CuTest *tc)
{
	char	*(*ft_itoa)(int) = get_fun("ft_itoa");
	int		n = -2147483648;
	char	*res;
	size_t	malloc_size;

	sprintf(buff.txt, "%s: n=<%d>\n", __func__, n);
	SANDBOX(
		res = ft_itoa(n);
		if (res)
			free(res);
		);
	CuAssert(tc, "FT_ITOA CRASH WITH MIN INT", !WIFSIGNALED(g_exit_code));
	res = ft_itoa(n);
	malloc_size = g_last_malloc_size;
	CuAssertStrEquals(tc, "-2147483648", res);
	if (res)
		free(res);
	CuAssertIntEquals_Msg(tc, "Bad allocation size", 12, malloc_size);
}

void	test_ft_itoa_zero(CuTest *tc)
{
	char	*(*ft_itoa)(int) = get_fun("ft_itoa");
	int		n = 0;
	char	*res;
	size_t	malloc_size;

	sprintf(buff.txt, "%s: n=<%d>\n", __func__, n);
	SANDBOX(
		res = ft_itoa(n);
		if (res)
			free(res);
		);
	CuAssert(tc, "FT_ITOA CRASH WITH N=0", !WIFSIGNALED(g_exit_code));
	res = ft_itoa(n);
	malloc_size = g_last_malloc_size;
	CuAssertStrEquals(tc, "0", res);
	if (res)
		free(res);
	CuAssertIntEquals_Msg(tc, "Bad allocation size", 2, malloc_size);
}

void	test_ft_itoa_malloc_fail(CuTest *tc)
{
	char	*(*ft_itoa)(int) = get_fun("ft_itoa");
	int		n = 23;
	char	*res;

	sprintf(buff.txt, "%s: n=<%d>\n", __func__, n);
	SANDBOX(
		FAIL_MALLOC;
		res = ft_itoa(n);
		END_FAIL;
		if (res)
			free(res);
		);
	CuAssert(tc, "FT_ITOA CRASH WHEN ALLOC FAILS.", !WIFSIGNALED(g_exit_code));
	FAIL_MALLOC;
	res = ft_itoa(n);
	END_FAIL;
	CuAssertPtrEquals(tc, NULL, res);
	if (res)
		free(res);
}

CuSuite	*ft_itoa_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_itoa_basic);
	SUITE_ADD_TEST(s, test_ft_itoa_negative);
	SUITE_ADD_TEST(s, test_ft_itoa_max_int);
	SUITE_ADD_TEST(s, test_ft_itoa_min_int);
	SUITE_ADD_TEST(s, test_ft_itoa_zero);
	SUITE_ADD_TEST(s, test_ft_itoa_malloc_fail);
	return (s);
}

/****************************/
/*        FT_STRMAPI        */
/****************************/

static char	rot_47(unsigned int i, char c)
{
	(void)i;
	g_in_fun++;
	//(((c - 33) + 47) % 94) + 33 <==> 33 + (c + 14) % 94
	if (c >= 33 && c <= 126)
		return (33 + (c + 14) % 94);
	return (c);
}

void	test_ft_strmapi_basic(CuTest *tc)
{
	char	*(*ft_strmapi)(char const *, char (*)(unsigned int, char)) = get_fun("ft_strmapi");
	char	s[] = "Hello! <23> !^*_~";
	char	*res;
	size_t	size;

	printf("\n########## FT_STRMAPI #########\n");
	sprintf(buff.txt, "%s: s=<%s>, f=<%p>\n", __func__, s, rot_47);
	SANDBOX(
		res = ft_strmapi(s, rot_47);
		if (res)
			free(res);
		);
	CuAssert(tc, "FT_STRMAPI CRASH WITH BASIC INPUTS.", !WIFSIGNALED(g_exit_code));
	g_in_fun = 0;
	res = ft_strmapi(s, rot_47);
	size = g_last_malloc_size;
	CuAssertIntEquals_Msg(tc, "ft_strmapi is not calling the function.", strlen(s), g_in_fun);
	CuAssertStrEquals(tc, "w6==@P kabm P/Y0O", res);
	if (res)
		free(res);
	CuAssertIntEquals_Msg(tc, "Bad allocation size.", strlen(s) + 1, size);
}

void	test_ft_strmapi_empty_s(CuTest *tc)
{
	char	*(*ft_strmapi)(char const *, char (*)(unsigned int, char)) = get_fun("ft_strmapi");
	char	s[] = "";
	char	*res;
	size_t	size;

	sprintf(buff.txt, "%s: s=<%s>, f=<%p>\n", __func__, s, rot_47);
	SANDBOX(
		res = ft_strmapi(s, rot_47);
		if (res)
			free(res);
		);
	CuAssert(tc, "FT_STRMAPI CRASH WITH EMPTY S.", !WIFSIGNALED(g_exit_code));
	g_in_fun = 0;
	res = ft_strmapi(s, rot_47);
	size = g_last_malloc_size;
	CuAssertIntEquals_Msg(tc, "ft_strmapi is not calling the function.", strlen(s), g_in_fun);
	CuAssertStrEquals(tc, "", res);
	if (res)
		free(res);
	CuAssertIntEquals_Msg(tc, "Bad allocation size.", strlen(s) + 1, size);
}

void	test_ft_strmapi_null_s(CuTest *tc)
{
	char	*(*ft_strmapi)(char const *, char (*)(unsigned int, char)) = get_fun("ft_strmapi");
	char	*s = NULL;
	char	*res;

	sprintf(buff.txt, "%s: s=<%s>, f=<%p>\n", __func__, s, rot_47);
	SANDBOX(
		res = ft_strmapi(s, rot_47);
		if (res)
			free(res);
		);
	CuAssert(tc, "FT_STRMAPI CRASH WITH NULL S.", !WIFSIGNALED(g_exit_code));
	res = ft_strmapi(s, rot_47);
	if (res)
		free(res);
	CuAssertPtrEquals_Msg(tc, "Bad return when s set to NULL.", NULL, res);
}

void	test_ft_strmapi_null_f(CuTest *tc)
{
	char	*(*ft_strmapi)(char const *, char (*)(unsigned int, char)) = get_fun("ft_strmapi");
	char	s[] = "Hello! <23> !^*_~";
	char	*res;

	sprintf(buff.txt, "%s: s=<%s>, f=<%p>\n", __func__, s, NULL);
	SANDBOX(
		res = ft_strmapi(s, NULL);
		if (res)
			free(res);
		);
	CuAssert(tc, "FT_STRMAPI CRASH WITH NULL F.", !WIFSIGNALED(g_exit_code));
	res = ft_strmapi(s, NULL);
	if (res)
		free(res);
	CuAssertPtrEquals_Msg(tc, "Bad return when f set to NULL.", NULL, res);
}

void	test_ft_strmapi_malloc_fail(CuTest *tc)
{
	char	*(*ft_strmapi)(char const *, char (*)(unsigned int, char)) = get_fun("ft_strmapi");
	char	s[] = "Hello! <23> !^*_~";
	char	*res;

	sprintf(buff.txt, "%s: s=<%s>, f=<%p>\n", __func__, s, rot_47);
	SANDBOX(
		FAIL_MALLOC;
		res = ft_strmapi(s, rot_47);
		END_FAIL;
		if (res)
			free(res);
		);
	CuAssert(tc, "FT_STRMAPI CRASH WHEN MALLOC FAILS.", !WIFSIGNALED(g_exit_code));
	FAIL_MALLOC;
	res = ft_strmapi(s, rot_47);
	END_FAIL;
	if (res)
		free(res);
	CuAssertPtrEquals_Msg(tc, "Bad return when malloc fails.", NULL, res);
}

CuSuite	*ft_strmapi_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_strmapi_basic);
	SUITE_ADD_TEST(s, test_ft_strmapi_empty_s);
	SUITE_ADD_TEST(s, test_ft_strmapi_null_s);
	SUITE_ADD_TEST(s, test_ft_strmapi_null_f);
	SUITE_ADD_TEST(s, test_ft_strmapi_malloc_fail);
	return (s);
}

/****************************/
/*        FT_STRITERI       */
/****************************/

static void rot_47_2(unsigned int i, char *c)
{
	(void)i;
	g_in_fun++;
	//(((c - 33) + 47) % 94) + 33 <==> 33 + (c + 14) % 94
	if (c && *c && *c >= 33 && *c <= 126)
		*c = (33 + (*c + 14) % 94);
}

void	test_ft_striteri_basic(CuTest *tc)
{
	void	(*ft_striteri)(char const *, void (*)(unsigned int, char*)) = get_fun("ft_striteri");
	char	s[] = "Hello! <23> !^*_~";

	printf("\n######### FT_STRITERI #########\n");
	sprintf(buff.txt, "%s: s=<%s>, f=<%p>\n", __func__, s, rot_47_2);
	SANDBOX(ft_striteri(s, rot_47_2););
	CuAssert(tc, "FT_STRITERI CRASH WITH BASIC INPUTS.", !WIFSIGNALED(g_exit_code));
	g_in_fun = 0;
	ft_striteri(s, rot_47_2);
	CuAssertIntEquals_Msg(tc, "ft_striteri is not calling the function.", strlen(s), g_in_fun);
	g_last_malloc_size = 0;
	CuAssertIntEquals_Msg(tc, "ft_striteri is calling malloc (WHY ?)", 0, g_last_malloc_size);
	CuAssertStrEquals(tc, "w6==@P kabm P/Y0O", s);
}

void	test_ft_striteri_empty_s(CuTest *tc)
{
	void	(*ft_striteri)(char const *, void (*)(unsigned int, char*)) = get_fun("ft_striteri");
	char	s[] = "";

	sprintf(buff.txt, "%s: s=<%s>, f=<%p>\n", __func__, s, rot_47_2);
	SANDBOX(ft_striteri(s, rot_47_2););
	CuAssert(tc, "FT_STRITERI CRASH WITH EMPTY S.", !WIFSIGNALED(g_exit_code));
	g_in_fun = 0;
	ft_striteri(s, rot_47_2);
	CuAssertIntEquals_Msg(tc, "ft_striteri is not calling the function.", strlen(s), g_in_fun);
	CuAssertStrEquals(tc, "", s);
}

void	test_ft_striteri_null_s(CuTest *tc)
{
	void	(*ft_striteri)(char const *, void (*)(unsigned int, char*)) = get_fun("ft_striteri");
	char	*s = NULL;

	sprintf(buff.txt, "%s: s=<%s>, f=<%p>\n", __func__, s, rot_47_2);
	SANDBOX(ft_striteri(s, rot_47_2););
	CuAssert(tc, "FT_STRITERI CRASH WITH NULL S.", !WIFSIGNALED(g_exit_code));
	ft_striteri(s, rot_47_2);
	CuAssertStrEquals(tc, NULL, s);
}

void	test_ft_striteri_null_f(CuTest *tc)
{
	void	(*ft_striteri)(char const *, void (*)(unsigned int, char*)) = get_fun("ft_striteri");
	char	s[] = "Hello! <23> !^*_~";

	sprintf(buff.txt, "%s: s=<%s>, f=<%p>\n", __func__, s, rot_47_2);
	SANDBOX(ft_striteri(s, NULL););
	CuAssert(tc, "FT_STRITERI CRASH WITH NULL F.", !WIFSIGNALED(g_exit_code));
	ft_striteri(s, NULL);
	CuAssertStrEquals(tc, "Hello! <23> !^*_~", s);
}

CuSuite	*ft_striteri_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_striteri_basic);
	SUITE_ADD_TEST(s, test_ft_striteri_empty_s);
	SUITE_ADD_TEST(s, test_ft_striteri_null_s);
	SUITE_ADD_TEST(s, test_ft_striteri_null_f);
	return (s);
}

/****************************/
/*       FT_PUTCHAR_FD      */
/****************************/

void	test_ft_putchar_fd_basic(CuTest *tc)
{
	void	(*ft_putchar_fd)(char,int) = get_fun("ft_putchar_fd");
	char	c = 'z';

	printf("\n######## FT_PUTCHAR_FD ########\n");
	sprintf(buff.txt, "%s: c=<%c>, fd=<allocated by pipe>\n", __func__, c);
	SANDBOX(
		CLOSE_OUTPUTS;
		OPEN_PIPE;
		ft_putchar_fd(c, fds[1]);
		CLOSE_PIPE;
		OPEN_OUTPUTS;
		);
	CuAssert(tc, "FT_PUTCHAR CRASH WITH BASIC INPUTS.", !WIFSIGNALED(g_exit_code));
	CLOSE_OUTPUTS;
	OPEN_PIPE;
	bzero(pipe_buff, BUFFSIZE);
	ft_putchar_fd(c, fds[1]);
	CLOSE_PIPE;
	OPEN_OUTPUTS;
	CuAssertStrEquals_Msg(tc, "ft_putchar_fd doesn't write c in fd", "z", pipe_buff);
}

CuSuite	*ft_putchar_fd_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_putchar_fd_basic);
	return (s);
}

/****************************/
/*        FT_PUTSTR_FD      */
/****************************/

void	test_ft_putstr_fd_basic(CuTest *tc)
{
	void	(*ft_putstr_fd)(char*,int) = get_fun("ft_putstr_fd");
	char	s[] = "Hello everyone!";

	printf("\n######### FT_PUTSTR_FD ########\n");
	sprintf(buff.txt, "%s: s=<%s>, fd=<allocated by pipe>\n", __func__, s);
	SANDBOX(
		CLOSE_OUTPUTS;
		OPEN_PIPE;
		ft_putstr_fd(s, fds[1]);
		CLOSE_PIPE;
		OPEN_OUTPUTS;
		);
	CuAssert(tc, "FT_PUTSTR CRASH WITH BASIC INPUTS.", !WIFSIGNALED(g_exit_code));
	CLOSE_OUTPUTS;
	OPEN_PIPE;
	bzero(pipe_buff, BUFFSIZE);
	ft_putstr_fd(s, fds[1]);
	CLOSE_PIPE;
	OPEN_OUTPUTS;
	CuAssertStrEquals_Msg(tc, "ft_putstr_fd doesn't write s in fd", "Hello everyone!", pipe_buff);
}

void	test_ft_putstr_fd_empty_s(CuTest *tc)
{
	void	(*ft_putstr_fd)(char*,int) = get_fun("ft_putstr_fd");
	char	s[] = "";

	sprintf(buff.txt, "%s: s=<%s>, fd=<allocated by pipe>\n", __func__, s);
	SANDBOX(
		CLOSE_OUTPUTS;
		OPEN_PIPE;
		ft_putstr_fd(s, fds[1]);
		CLOSE_PIPE;
		OPEN_OUTPUTS;
		);
	CuAssert(tc, "FT_PUTSTR CRASH WITH EMPTY S.", !WIFSIGNALED(g_exit_code));
	CLOSE_OUTPUTS;
	OPEN_PIPE;
	bzero(pipe_buff, BUFFSIZE);
	ft_putstr_fd(s, fds[1]);
	CLOSE_PIPE;
	OPEN_OUTPUTS;
	CuAssertStrEquals_Msg(tc, "ft_putstr_fd doesn't write s in fd", "", pipe_buff);
}

void	test_ft_putstr_fd_null_s(CuTest *tc)
{
	void	(*ft_putstr_fd)(char*,int) = get_fun("ft_putstr_fd");
	char	*s = NULL;

	sprintf(buff.txt, "%s: s=<%s>, fd=<allocated by pipe>\n", __func__, s);
	SANDBOX(
		CLOSE_OUTPUTS;
		OPEN_PIPE;
		ft_putstr_fd(s, fds[1]);
		CLOSE_PIPE;
		);
	CuAssert(tc, "FT_PUTSTR CRASH WITH NULL S.", !WIFSIGNALED(g_exit_code));
	OPEN_PIPE;
	bzero(pipe_buff, BUFFSIZE);
	write(fds[1], "z", 1);
	ft_putstr_fd(s, fds[1]);
	CLOSE_PIPE;
	OPEN_OUTPUTS;
	CuAssertStrEquals_Msg(tc, "ft_putstr_fd writes to fd with NULL s.", "z", pipe_buff);
}

CuSuite	*ft_putstr_fd_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_putstr_fd_basic);
	SUITE_ADD_TEST(s, test_ft_putstr_fd_empty_s);
	SUITE_ADD_TEST(s, test_ft_putstr_fd_null_s);
	return (s);
}

/****************************/
/*       FT_PUTENDL_FD      */
/****************************/

void	test_ft_putendl_fd_basic(CuTest *tc)
{
	void	(*ft_putendl_fd)(char*,int) = get_fun("ft_putendl_fd");
	char	s[] = "Hello everyone!";

	printf("\n######## FT_PUTENDL_FD ########\n");
	sprintf(buff.txt, "%s: s=<%s>, fd=<allocated by pipe>\n", __func__, s);
	SANDBOX(
		CLOSE_OUTPUTS;
		OPEN_PIPE;
		ft_putendl_fd(s, fds[1]);
		CLOSE_PIPE;
		OPEN_OUTPUTS;
		);
	CuAssert(tc, "FT_PUTENDL CRASH WITH BASIC INPUTS.", !WIFSIGNALED(g_exit_code));
	CLOSE_OUTPUTS;
	OPEN_PIPE;
	bzero(pipe_buff, BUFFSIZE);
	ft_putendl_fd(s, fds[1]);
	CLOSE_PIPE;
	OPEN_OUTPUTS;
	CuAssertStrEquals_Msg(tc, "ft_putendl_fd doesn't write s in fd", "Hello everyone!\n", pipe_buff);
}

void	test_ft_putendl_fd_multiple_nl(CuTest *tc)
{
	void	(*ft_putendl_fd)(char*,int) = get_fun("ft_putendl_fd");
	char	s[] = "Hello everyone!\n\n";

	sprintf(buff.txt, "%s: s=<%s>, fd=<allocated by pipe>\n", __func__, s);
	SANDBOX(
		CLOSE_OUTPUTS;
		OPEN_PIPE;
		ft_putendl_fd(s, fds[1]);
		CLOSE_PIPE;
		OPEN_OUTPUTS;
		);
	CuAssert(tc, "FT_PUTENDL CRASH WITH BASIC INPUTS.", !WIFSIGNALED(g_exit_code));
	CLOSE_OUTPUTS;
	OPEN_PIPE;
	bzero(pipe_buff, BUFFSIZE);
	ft_putendl_fd(s, fds[1]);
	CLOSE_PIPE;
	OPEN_OUTPUTS;
	CuAssertStrEquals_Msg(tc, "ft_putendl_fd doesn't write s in fd", "Hello everyone!\n\n\n", pipe_buff);
}

void	test_ft_putendl_fd_empty_s(CuTest *tc)
{
	void	(*ft_putendl_fd)(char*,int) = get_fun("ft_putendl_fd");
	char	s[] = "";

	sprintf(buff.txt, "%s: s=<%s>, fd=<allocated by pipe>\n", __func__, s);
	SANDBOX(
		CLOSE_OUTPUTS;
		OPEN_PIPE;
		ft_putendl_fd(s, fds[1]);
		CLOSE_PIPE;
		OPEN_OUTPUTS;
		);
	CuAssert(tc, "FT_PUTENDL CRASH WITH EMPTY S.", !WIFSIGNALED(g_exit_code));
	CLOSE_OUTPUTS;
	OPEN_PIPE;
	bzero(pipe_buff, BUFFSIZE);
	ft_putendl_fd(s, fds[1]);
	CLOSE_PIPE;
	OPEN_OUTPUTS;
	CuAssertStrEquals_Msg(tc, "ft_putendl_fd doesn't write s in fd", "\n", pipe_buff);
}

void	test_ft_putendl_fd_null_s(CuTest *tc)
{
	void	(*ft_putendl_fd)(char*,int) = get_fun("ft_putendl_fd");
	char	*s = NULL;

	sprintf(buff.txt, "%s: s=<%s>, fd=<allocated by pipe>\n", __func__, s);
	SANDBOX(
		CLOSE_OUTPUTS;
		OPEN_PIPE;
		ft_putendl_fd(s, fds[1]);
		CLOSE_PIPE;
		);
	CuAssert(tc, "FT_PUTENDL CRASH WITH NULL S.", !WIFSIGNALED(g_exit_code));
	OPEN_PIPE;
	bzero(pipe_buff, BUFFSIZE);
	write(fds[1], "z", 1);
	ft_putendl_fd(s, fds[1]);
	CLOSE_PIPE;
	OPEN_OUTPUTS;
	CuAssertStrEquals_Msg(tc, "ft_putendl_fd writes to fd with NULL s.", "z", pipe_buff);
}

CuSuite	*ft_putendl_fd_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_putendl_fd_basic);
	SUITE_ADD_TEST(s, test_ft_putendl_fd_multiple_nl);
	SUITE_ADD_TEST(s, test_ft_putendl_fd_empty_s);
	SUITE_ADD_TEST(s, test_ft_putendl_fd_null_s);
	return (s);
}

/****************************/
/*        FT_PUTNBR_FD      */
/****************************/

void	test_ft_putnbr_fd_basic(CuTest *tc)
{
	void	(*ft_putnbr_fd)(int,int) = get_fun("ft_putnbr_fd");
	int		n = 23456;

	printf("\n######### FT_PUTNBR_FD ########\n");
	sprintf(buff.txt, "%s: n=<%d>, fd=<allocated by pipe>\n", __func__, n);
	SANDBOX(
		CLOSE_OUTPUTS;
		OPEN_PIPE;
		ft_putnbr_fd(n, fds[1]);
		CLOSE_PIPE;
		OPEN_OUTPUTS;
		);
	CuAssert(tc, "FT_PUTNBR_FD CRASH WITH BASIC INPUTS.", !WIFSIGNALED(g_exit_code));
	CLOSE_OUTPUTS;
	OPEN_PIPE;
	bzero(pipe_buff, BUFFSIZE);
	ft_putnbr_fd(n, fds[1]);
	CLOSE_PIPE;
	OPEN_OUTPUTS;
	CuAssertStrEquals_Msg(tc, "ft_putnbr doesn't write n to fd.", "23456", pipe_buff);
}

void	test_ft_putnbr_fd_negative(CuTest *tc)
{
	void	(*ft_putnbr_fd)(int,int) = get_fun("ft_putnbr_fd");
	int		n = -23456;

	sprintf(buff.txt, "%s: n=<%d>, fd=<allocated by pipe>\n", __func__, n);
	SANDBOX(
		CLOSE_OUTPUTS;
		OPEN_PIPE;
		ft_putnbr_fd(n, fds[1]);
		CLOSE_PIPE;
		OPEN_OUTPUTS;
		);
	CuAssert(tc, "FT_PUTNBR_FD CRASH WITH NEGATIVE N.", !WIFSIGNALED(g_exit_code));
	CLOSE_OUTPUTS;
	OPEN_PIPE;
	bzero(pipe_buff, BUFFSIZE);
	ft_putnbr_fd(n, fds[1]);
	CLOSE_PIPE;
	OPEN_OUTPUTS;
	CuAssertStrEquals_Msg(tc, "ft_putnbr doesn't write n to fd.", "-23456", pipe_buff);
}

void	test_ft_putnbr_fd_int_min(CuTest *tc)
{
	void	(*ft_putnbr_fd)(int,int) = get_fun("ft_putnbr_fd");
	int		n = -2147483648;

	sprintf(buff.txt, "%s: n=<%d>, fd=<allocated by pipe>\n", __func__, n);
	SANDBOX(
		CLOSE_OUTPUTS;
		OPEN_PIPE;
		ft_putnbr_fd(n, fds[1]);
		CLOSE_PIPE;
		OPEN_OUTPUTS;
		);
	CuAssert(tc, "FT_PUTNBR_FD CRASH WITH INT MIN.", !WIFSIGNALED(g_exit_code));
	CLOSE_OUTPUTS;
	OPEN_PIPE;
	bzero(pipe_buff, BUFFSIZE);
	ft_putnbr_fd(n, fds[1]);
	CLOSE_PIPE;
	OPEN_OUTPUTS;
	CuAssertStrEquals_Msg(tc, "ft_putnbr doesn't write n to fd.", "-2147483648", pipe_buff);
}

void	test_ft_putnbr_fd_int_max(CuTest *tc)
{
	void	(*ft_putnbr_fd)(int,int) = get_fun("ft_putnbr_fd");
	int		n = 2147483647;

	sprintf(buff.txt, "%s: n=<%d>, fd=<allocated by pipe>\n", __func__, n);
	SANDBOX(
		CLOSE_OUTPUTS;
		OPEN_PIPE;
		ft_putnbr_fd(n, fds[1]);
		CLOSE_PIPE;
		OPEN_OUTPUTS;
		);
	CuAssert(tc, "FT_PUTNBR_FD CRASH WITH INT MAX.", !WIFSIGNALED(g_exit_code));
	CLOSE_OUTPUTS;
	OPEN_PIPE;
	bzero(pipe_buff, BUFFSIZE);
	ft_putnbr_fd(n, fds[1]);
	CLOSE_PIPE;
	OPEN_OUTPUTS;
	CuAssertStrEquals_Msg(tc, "ft_putnbr doesn't write n to fd.", "2147483647", pipe_buff);
}

void	test_ft_putnbr_fd_zero(CuTest *tc)
{
	void	(*ft_putnbr_fd)(int,int) = get_fun("ft_putnbr_fd");
	int		n = 0;

	sprintf(buff.txt, "%s: n=<%d>, fd=<allocated by pipe>\n", __func__, n);
	SANDBOX(
		CLOSE_OUTPUTS;
		OPEN_PIPE;
		ft_putnbr_fd(n, fds[1]);
		CLOSE_PIPE;
		OPEN_OUTPUTS;
		);
	CuAssert(tc, "FT_PUTNBR_FD CRASH WITH ZERO.", !WIFSIGNALED(g_exit_code));
	CLOSE_OUTPUTS;
	OPEN_PIPE;
	bzero(pipe_buff, BUFFSIZE);
	ft_putnbr_fd(n, fds[1]);
	CLOSE_PIPE;
	OPEN_OUTPUTS;
	CuAssertStrEquals_Msg(tc, "ft_putnbr doesn't write n to fd.", "0", pipe_buff);
}

CuSuite	*ft_putnbr_fd_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_putnbr_fd_basic);
	SUITE_ADD_TEST(s, test_ft_putnbr_fd_negative);
	SUITE_ADD_TEST(s, test_ft_putnbr_fd_int_min);
	SUITE_ADD_TEST(s, test_ft_putnbr_fd_int_max);
	SUITE_ADD_TEST(s, test_ft_putnbr_fd_zero);
	return (s);
}

/********************************* BONUS PART *********************************/

/****************************/
/*          FT_LSTNEW       */
/****************************/

void	one_test_ft_lstnew(CuTest *tc, char *testcase, void *content, int fail_malloc)
{
	t_list	*(*ft_lstnew)(void*) = get_fun("ft_lstnew");
	t_list	*res;
	char	text[BUFFBSIZE];
	size_t	m_size;

	SANDBOX(
		if (fail_malloc)
			FAIL_MALLOC;
		res = ft_lstnew(content);
		if (fail_malloc)
			END_FAIL;
		if (res)
			free(res);
		);
	sprintf(text, "FT_LSTNEW CRASH WITH %s", testcase);
	CuAssert(tc, text, !WIFSIGNALED(g_exit_code));
	if (fail_malloc)
		FAIL_MALLOC;
	res = ft_lstnew(content);
	if (fail_malloc)
		END_FAIL;
	m_size = g_last_malloc_size;
	if (!fail_malloc)
	{
		sprintf(text, "ft_lstnew returns NULL with %s", testcase);
		CuAssertPtrNotNullMsg(tc, text, res);
		sprintf(text, "Wrong allocation size with %s", testcase);
		CuAssert(tc, text, m_size == sizeof(t_list));
		sprintf(text, "The new node doesn't contain right content with %s", testcase);
		CuAssert(tc, text, res->content == content);
		sprintf(text, "The next of new not is not set to NULL with %s", testcase);
		CuAssert(tc, text, res->next == NULL);
	}
	else
	{
		sprintf(text, "ft_lstnew doesn't returns NULL with %s", testcase);
		CuAssertPtrEquals_Msg(tc, text, NULL, res);
	}
	if (res)
		free(res);
}

void	test_ft_lstnew_basic(CuTest *tc)
{
	void	*content;

	printf("\n########### FT_LSTNEW #########\n");
	content = strdup("Hope your bonuses work!");
	sprintf(buff.txt, "%s: content=<%s>\n", __func__, (char*)content);
	one_test_ft_lstnew(tc, "Basic input", content, 0);
	free(content);
}

void	test_ft_lstnew_null_content(CuTest *tc)
{
	char	*s = NULL;
	sprintf(buff.txt, "%s: content=<%s>\n", __func__, s);
	one_test_ft_lstnew(tc, "NULL content", s, 0);
}

void	test_ft_lstnew_malloc_fail(CuTest *tc)
{
	void	*content;

	content = strdup("Hope your bonuses work!");
	sprintf(buff.txt, "%s: content=<%s>\n", __func__, (char*)content);
	one_test_ft_lstnew(tc, "malloc fail", content, 1);
	free(content);
}

CuSuite	*ft_lstnew_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_lstnew_basic);
	SUITE_ADD_TEST(s, test_ft_lstnew_null_content);
	SUITE_ADD_TEST(s, test_ft_lstnew_malloc_fail);
	return (s);
}

/****************************/
/*      FT_LSTADD_FRONT     */
/****************************/

t_list	*lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	one_test_ft_lstadd_front(CuTest *tc, char *testcase, t_list **lst, t_list *new, t_list **ex)
{
	void	(*ft_lstadd_front)(t_list**,t_list*) = get_fun("ft_lstadd_front");
	char	text[BUFFBSIZE];
	t_list	*tmp1;
	t_list	*tmp2;

	sprintf(text, "FT_LSTADD_FRONT CRASH WITH %s", testcase);
	SANDBOX(ft_lstadd_front(lst, new););
	CuAssert(tc, text, !WIFSIGNALED(g_exit_code));
	ft_lstadd_front(lst, new);
	sprintf(text, "ft_lstadd_front doesn't behave well with %s", testcase);
	if (!lst || !ex)
		CuAssert(tc, text, lst == ex);
	else
	{
		tmp1 = *lst;
		tmp2 = *ex;
		CuAssert(tc, text, (!tmp1 && !tmp2) || (tmp1 && tmp2));
		while (tmp1 && tmp2)
		{
			CuAssert(tc, text, tmp1->content == tmp2->content);
			tmp1 = tmp1->next;
			tmp2 = tmp2->next;
		}
	}
}

void	test_ft_lstadd_front_basic(CuTest *tc)
{
	t_list	*lst;
	t_list	*savelst;
	t_list	*new;
	t_list	*savenew;
	char	*s1 = strdup("Hope you pass this test");
	char	*s2 = strdup("I'm the new node");
	t_list	*lstex;

	printf("\n######## FT_LSTADD_FRONT ######\n");
	sprintf(buff.txt, "%s: two nodes passed\n", __func__);
	lst = lstnew(s1);
	savelst = lst;
	new = lstnew(s2);
	savenew = new;
	lstex = lstnew(s2);
	lstex->next = lstnew(s1);
	one_test_ft_lstadd_front(tc, "Basic inputs", &lst, new, &lstex);
	free(s1);
	free(s2);
	free(savenew);
	free(savelst);
	free(lstex->next);
	free(lstex);
}

void	test_ft_lstadd_front_null_lst(CuTest *tc)
{
	t_list	**lst = NULL;
	t_list	*new = lstnew(strdup("hello"));

	sprintf(buff.txt, "%s: NULL lst\n", __func__);
	one_test_ft_lstadd_front(tc, "Null lst", lst, new, NULL);
	free(new);
}

void	test_ft_lstadd_front_null_pointer_lst(CuTest *tc)
{
	t_list	*lst = NULL;
	t_list	*new = lstnew(strdup("hello"));
	t_list	*ex = new;

	sprintf(buff.txt, "%s: NULL *lst\n", __func__);
	one_test_ft_lstadd_front(tc, "Null pointer lst", &lst, new, &ex);
	free(new);
}

void	test_ft_lstadd_front_null_new(CuTest *tc)
{
	t_list	*lst = lstnew(strdup("hello"));
	t_list	*new = NULL;
	t_list	*ex = lst;

	sprintf(buff.txt, "%s: NULL new\n", __func__);
	one_test_ft_lstadd_front(tc, "Null new", &lst, new, &ex);
	free(lst);
}

void	test_ft_lstadd_front_null_lst_and_new(CuTest *tc)
{
	sprintf(buff.txt, "%s: NULL lst & new\n", __func__);
	one_test_ft_lstadd_front(tc, "Null lst & new", NULL, NULL, NULL);
}

CuSuite	*ft_lstadd_front_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_lstadd_front_basic);
	SUITE_ADD_TEST(s, test_ft_lstadd_front_null_lst);
	SUITE_ADD_TEST(s, test_ft_lstadd_front_null_pointer_lst);
	SUITE_ADD_TEST(s, test_ft_lstadd_front_null_new);
	SUITE_ADD_TEST(s, test_ft_lstadd_front_null_lst_and_new);
	return (s);
}

/****************************/
/*         FT_LSTSIZE       */
/****************************/

void	test_ft_lstsize_basic(CuTest *tc)
{
	int		(*ft_lstsize)(t_list*) = get_fun("ft_lstsize");
	t_list	*lst = lstnew(strdup("node 1"));
	int		res;

	printf("\n########## FT_LSTSIZE #########\n");
	sprintf(buff.txt, "%s: lst of 3 nodes passed.\n", __func__);
	if (!lst)
		return ;
	lst->next = lstnew(strdup("node 2"));
	if (!lst->next)
		return ;
	lst->next->next = lstnew(strdup("node 3"));
	if (!lst->next->next)
		return ;
	SANDBOX(res = ft_lstsize(lst););
	CuAssert(tc, "FT_LSTSIZE CRASH WITH BASIC INPUT", !WIFSIGNALED(g_exit_code));
	res = ft_lstsize(lst);
	CuAssertIntEquals_Msg(tc, "Wrong size returned", 3, res);
}

void	test_ft_lstsize_null_lst(CuTest *tc)
{
	int		(*ft_lstsize)(t_list*) = get_fun("ft_lstsize");
	t_list	*lst = NULL;
	int		res;

	sprintf(buff.txt, "%s: NULL passed.\n", __func__);
	SANDBOX(res = ft_lstsize(lst););
	CuAssert(tc, "FT_LSTSIZE CRASH WITH NULL LST", !WIFSIGNALED(g_exit_code));
	res = ft_lstsize(lst);
	CuAssertIntEquals_Msg(tc, "Wrong size returned", 0, res);
}

CuSuite	*ft_lstsize_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_lstsize_basic);
	SUITE_ADD_TEST(s, test_ft_lstsize_null_lst);
	return (s);
}

/****************************/
/*         FT_LSTLAST       */
/****************************/

void	test_ft_lstlast_basic(CuTest *tc)
{
	t_list	*(*ft_lstlast)(t_list*) = get_fun("ft_lstlast");
	t_list	*lst = lstnew(NULL);
	t_list	*res;
	t_list	*ex;

	printf("\n########## FT_LSTLAST #########\n");
	sprintf(buff.txt, "%s: list of 3 nodes passed.\n", __func__);
	if (!lst)
		return ;
	lst->next = lstnew(NULL);
	if (!lst->next)
		return ;
	lst->next->next = lstnew(NULL);
	if (!lst->next->next)
		return ;
	SANDBOX(res = ft_lstlast(lst););
	CuAssert(tc, "FT_LSTLAST CRASH WITH BASIC INPUT", !WIFSIGNALED(g_exit_code));
	res = ft_lstlast(lst);
	ex = lst->next->next;
	free(lst->next->next);
	free(lst->next);
	free(lst);
	CuAssert(tc, "ft_lstlast doesn't return the right node", res == ex);
}

void	test_ft_lstlast_null_lst(CuTest *tc)
{
	t_list	*(*ft_lstlast)(t_list*) = get_fun("ft_lstlast");
	t_list	*lst = NULL;
	t_list	*res;

	sprintf(buff.txt, "%s: NULL passed.\n", __func__);
	SANDBOX(res = ft_lstlast(lst););
	CuAssert(tc, "FT_LSTLAST CRASH WITH NULL LST", !WIFSIGNALED(g_exit_code));
	res = ft_lstlast(lst);
	CuAssert(tc, "ft_lstlast doesn't return NULL with NULL param", res == NULL);
}

CuSuite	*ft_lstlast_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_lstlast_basic);
	SUITE_ADD_TEST(s, test_ft_lstlast_null_lst);
	return (s);
}

/****************************/
/*      FT_LSTADD_BACK      */
/****************************/

void	one_test_ft_lstadd_back(CuTest *tc, char *testcase, t_list **lst, t_list *new, t_list **ex)
{
	void	(*ft_lstadd_back)(t_list**,t_list*) = get_fun("ft_lstadd_back");
	char	text[BUFFBSIZE];
	t_list	*tmp1;
	t_list	*tmp2;

	sprintf(text, "FT_LSTADD_BACK CRASH WITH %s", testcase);
	SANDBOX(ft_lstadd_back(lst, new););
	CuAssert(tc, text, !WIFSIGNALED(g_exit_code));
	ft_lstadd_back(lst, new);
	sprintf(text, "ft_lstadd_back doesn't behave well with %s", testcase);
	if (!lst || !ex)
		CuAssert(tc, text, lst == ex);
	else
	{
		tmp1 = *lst;
		tmp2 = *ex;
		CuAssert(tc, text, (!tmp1 && !tmp2) || (tmp1 && tmp2));
		while (tmp1 && tmp2)
		{
			CuAssert(tc, text, tmp1->content == tmp2->content);
			tmp1 = tmp1->next;
			tmp2 = tmp2->next;
		}
	}
}

void	test_ft_lstadd_back_basic(CuTest *tc)
{
	char	*s1;
	char	*s2;
	char	*s3;
	t_list	*lst;
	t_list	*next;
	t_list	*new;
	t_list	*ex;


	printf("\n######## FT_LSTADD_BACK #######\n");
	sprintf(buff.txt, "%s: list of 2 nodes + new node passed.\n", __func__);
	s1 = strdup("first");
	s2 = strdup("second");
	s3 = strdup("third");
	lst = lstnew(s1);
	next = lstnew(s2);
	new = lstnew(s3);
	ex = lstnew(s1);
	if (!lst || !next || !new || !ex)
		exit(EXIT_FAILURE);
	ex->next = lstnew(s2);
	lst->next = lstnew(s2);
	if (!ex->next || !lst->next)
		exit(EXIT_FAILURE);
	ex->next->next = lstnew(s3);
	if (!ex->next->next)
		exit(EXIT_FAILURE);
	t_list	*saves[] = {lst, lst->next, new};
	one_test_ft_lstadd_back(tc, "basic inputs", &lst, new, &ex);
	for (int i = 0; i < 3; i++)
		free(saves[i]);
	free(ex->next->next);
	free(ex->next);
	free(ex);
}

void	test_ft_lstadd_back_null_lst(CuTest *tc)
{
	t_list	*new;

	if (!(new = lstnew(strdup("coucou"))))
		exit(EXIT_FAILURE);
	sprintf(buff.txt, "%s: NULL lst + new node passed.\n", __func__);
	one_test_ft_lstadd_back(tc, "NULL lst", NULL, new, NULL);
}

void	test_ft_lstadd_back_null_pointer_lst(CuTest *tc)
{
	char	*s1;
	t_list	*lst;
	t_list	*new;
	t_list	*ex;


	sprintf(buff.txt, "%s: list pointing to NULL + new node passed.\n", __func__);
	s1 = strdup("first");
	lst = NULL;
	new = lstnew(s1);
	ex = lstnew(s1);
	if (!new || !ex)
		exit(EXIT_FAILURE);
	t_list	*save = new;
	one_test_ft_lstadd_back(tc, "lst pointing to NULL", &lst, new, &ex);
	free(save);
	free(ex);
}

void	test_ft_lstadd_back_null_new(CuTest *tc)
{
	char	*s1;
	t_list	*lst;
	t_list	*new;
	t_list	*ex;


	sprintf(buff.txt, "%s: list of 1 node + NULL passed.\n", __func__);
	s1 = strdup("first");
	lst = lstnew(s1);
	new = NULL;
	ex = lstnew(s1);
	if (!lst || !ex)
		exit(EXIT_FAILURE);
	t_list	*save = lst;
	one_test_ft_lstadd_back(tc, "NULL new", &lst, new, &ex);
	free(save);
	free(ex);
}

void	test_ft_lstadd_back_null_lst_and_new(CuTest *tc)
{
	t_list	*lst = NULL;
	t_list	*new = NULL;
	t_list	*ex = NULL;


	sprintf(buff.txt, "%s: NULL lst & NULL new passed.\n", __func__);
	one_test_ft_lstadd_back(tc, "NULL new", &lst, new, &ex);
}

CuSuite	*ft_lstadd_back_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_lstadd_back_basic);
	SUITE_ADD_TEST(s, test_ft_lstadd_back_null_lst);
	SUITE_ADD_TEST(s, test_ft_lstadd_back_null_pointer_lst);
	SUITE_ADD_TEST(s, test_ft_lstadd_back_null_new);
	return (s);
}

/****************************/
/*        FT_LSTDELONE      */
/****************************/
int		g_fct_called;

void	del(void *content)
{
	int	**arr;

	g_fct_called++;
	arr = (int **)content;
	free(arr[0]);
	arr[0] = NULL;
	free(arr[1]);
	arr[1] = NULL;
	free(arr);
}

void	test_ft_lstdelone_basic(CuTest *tc)
{
	void	(*ft_lstdelone)(t_list*, void(*)(void*)) = get_fun("ft_lstdelone");
	t_list	*lst;
	int		**arr;

	printf("\n######### FT_LSTDELONE ########\n");
	sprintf(buff.txt, "%s: lst set to a node containing 2D array of int, del corresponding function.\n", __func__);
	if (!(arr = (int **)malloc(sizeof(int *) * 2)))
		exit(EXIT_FAILURE);
	if (!(arr[0] = (int *)malloc(sizeof(int) * 3)))
		exit(EXIT_FAILURE);
	if (!(arr[1] = (int *)malloc(sizeof(int) * 3)))
		exit(EXIT_FAILURE);
	if (!(lst = lstnew(arr)))
		exit(EXIT_FAILURE);
	SANDBOX(ft_lstdelone(lst, del););
	CuAssert(tc, "FT_LSTDELONE CRASH WITH BASIC INPUTS", !WIFSIGNALED(g_exit_code));
	g_fct_called = 0;
	g_free_called = 0;
	ft_lstdelone(lst, del);
	CuAssert(tc, "ft_lstdelone doesn't call the del function", g_fct_called == 1);
	CuAssert(tc, "ft_lstdelone doesn't call free after calling del", g_free_called == 4);
}

void	test_ft_lstdelone_null_lst(CuTest *tc)
{
	void	(*ft_lstdelone)(t_list*, void(*)(void*)) = get_fun("ft_lstdelone");
	t_list	*lst = NULL;

	sprintf(buff.txt, "%s: lst set to NULL, del to a delete function.\n", __func__);
	SANDBOX(ft_lstdelone(lst, del););
	CuAssert(tc, "FT_LSTDELONE CRASH WITH NULL LST", !WIFSIGNALED(g_exit_code));
}

void	test_ft_lstdelone_null_del(CuTest *tc)
{
	void	(*ft_lstdelone)(t_list*, void(*)(void*)) = get_fun("ft_lstdelone");
	t_list	*lst;
	int		**arr;

	sprintf(buff.txt, "%s: lst set to a node containing 2D array of int, del to NULL.\n", __func__);
	if (!(arr = (int **)malloc(sizeof(int *) * 2)))
		exit(EXIT_FAILURE);
	if (!(arr[0] = (int *)malloc(sizeof(int) * 3)))
		exit(EXIT_FAILURE);
	if (!(arr[1] = (int *)malloc(sizeof(int) * 3)))
		exit(EXIT_FAILURE);
	if (!(lst = lstnew(arr)))
		exit(EXIT_FAILURE);
	SANDBOX(ft_lstdelone(lst, NULL););
	CuAssert(tc, "FT_LSTDELONE CRASH WITH NULL DEL", !WIFSIGNALED(g_exit_code));
	g_free_called = 0;
	ft_lstdelone(lst, NULL);
	CuAssert(tc, "ft_lstdelone call free when del is NULL.(It shouldn't!)", g_free_called == 0);
	free(arr[0]);
	free(arr[1]);
	free(arr);
}

CuSuite	*ft_lstdelone_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_lstdelone_basic);
	SUITE_ADD_TEST(s, test_ft_lstdelone_null_lst);
	SUITE_ADD_TEST(s, test_ft_lstdelone_null_del);
	return (s);
}

/****************************/
/*        FT_LSTCLEAR       */
/****************************/

void	test_ft_lstclear_basic(CuTest *tc)
{
	void	(*ft_lstclear)(t_list**, void(*)(void*)) = get_fun("ft_lstclear");
	int		**arr1;
	int		**arr2;
	t_list	*lst;

	printf("\n########## FT_LSTCLEAR ########\n");
	printf("/!\\ If the test crashes here, it certainly comes from your ft_lstclear. /!\\\n");
	if (!(arr1 = (int **)malloc(sizeof(int *) * 2)))
		exit(EXIT_FAILURE);
	if (!(arr1[0] = (int *)malloc(sizeof(int) * 3)))
		exit(EXIT_FAILURE);
	if (!(arr1[1] = (int *)malloc(sizeof(int) * 3)))
		exit(EXIT_FAILURE);
	if (!(arr2 = (int **)malloc(sizeof(int *) * 2)))
		exit(EXIT_FAILURE);
	if (!(arr2[0] = (int *)malloc(sizeof(int) * 3)))
		exit(EXIT_FAILURE);
	if (!(arr2[1] = (int *)malloc(sizeof(int) * 3)))
		exit(EXIT_FAILURE);
	if (!(lst = lstnew(arr1)))
		exit(EXIT_FAILURE);
	if (!(lst->next = lstnew(arr2)))
		exit(EXIT_FAILURE);
	sprintf(buff.txt, "%s: lst set to list of nodes of 2D int arrays, del to appropriate function.\n", __func__);
	g_fct_called = 0;
	g_free_called = 0;
	SANDBOX(ft_lstclear(&lst, del););
	CuAssert(tc, "FT_LSTCLEAR CRASH WITH BASIC INPUTS", !WIFSIGNALED(g_exit_code));
	g_fct_called = 0;
	g_free_called = 0;
	ft_lstclear(&lst, del);
	CuAssert(tc, "ft_lstclear doesn't call enough del", g_fct_called == 2);
	CuAssert(tc, "ft_lstclear doesn't call enough free after del", g_free_called == 8);
	CuAssert(tc, "ft_lstclear doesn't set lst to NULL pointer.", lst == NULL);
}

void	test_ft_lstclear_null_lst(CuTest *tc)
{
	void	(*ft_lstclear)(t_list**, void(*)(void*)) = get_fun("ft_lstclear");

	sprintf(buff.txt, "%s: lst set to NULL, del to same function as before.\n", __func__);
	SANDBOX(ft_lstclear(NULL, del););
	CuAssert(tc, "FT_LSTCLEAR CRASH WITH NULL LST", !WIFSIGNALED(g_exit_code));
	g_fct_called = 0;
	g_free_called = 0;
	ft_lstclear(NULL, del);
	CuAssert(tc, "ft_lstclear calls del (WHY ?)", g_fct_called == 0);
	CuAssert(tc, "ft_lstclear calls free (WHY ?)", g_fct_called == 0);
}

void	test_ft_lstclear_null_pointer_lst(CuTest *tc)
{
	void	(*ft_lstclear)(t_list**, void(*)(void*)) = get_fun("ft_lstclear");
	t_list	*lst = NULL;

	sprintf(buff.txt, "%s: lst set to NULL, del to same function as before.\n", __func__);
	SANDBOX(ft_lstclear(&lst, del););
	CuAssert(tc, "FT_LSTCLEAR CRASH WITH LST POINTING TO NULL", !WIFSIGNALED(g_exit_code));
	g_fct_called = 0;
	g_free_called = 0;
	ft_lstclear(&lst, del);
	CuAssert(tc, "ft_lstclear calls del (WHY ?)", g_fct_called == 0);
	CuAssert(tc, "ft_lstclear calls free (WHY ?)", g_free_called == 0);
}

void	test_ft_lstclear_null_del(CuTest *tc)
{
	void	(*ft_lstclear)(t_list**, void(*)(void*)) = get_fun("ft_lstclear");
	int		**arr1;
	int		**arr2;
	t_list	*lst;

	if (!(arr1 = (int **)malloc(sizeof(int *) * 2)))
		exit(EXIT_FAILURE);
	if (!(arr1[0] = (int *)malloc(sizeof(int) * 3)))
		exit(EXIT_FAILURE);
	if (!(arr1[1] = (int *)malloc(sizeof(int) * 3)))
		exit(EXIT_FAILURE);
	if (!(lst = lstnew(arr1)))
		exit(EXIT_FAILURE);
	if (!(arr2 = (int **)malloc(sizeof(int *) * 2)))
		exit(EXIT_FAILURE);
	if (!(arr2[0] = (int *)malloc(sizeof(int) * 3)))
		exit(EXIT_FAILURE);
	if (!(arr2[1] = (int *)malloc(sizeof(int) * 3)))
		exit(EXIT_FAILURE);
	if (!(lst = lstnew(arr1)))
		exit(EXIT_FAILURE);
	if (!(lst->next = lstnew(arr2)))
		exit(EXIT_FAILURE);
	sprintf(buff.txt, "%s: lst set to list of nodes of 2D int arrays, del to NULL.\n", __func__);
	SANDBOX(ft_lstclear(&lst, NULL););
	CuAssert(tc, "FT_LSTCLEAR CRASH WITH NULL DEL", !WIFSIGNALED(g_exit_code));
	g_free_called = 0;
	ft_lstclear(&lst, NULL);
	CuAssert(tc, "ft_lstclear calls free when del is NULL (It shouldn't!)", g_free_called == 0);
	CuAssert(tc, "ft_lstclear sets lst to NULL when del is NULL (it shouldn't!)", lst != NULL);
	free(arr1[0]);
	free(arr1[1]);
	free(arr1);
	free(arr2[0]);
	free(arr2[1]);
	free(arr2);
	free(lst->next);
	free(lst);
}

CuSuite	*ft_lstclear_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_lstclear_basic);
	SUITE_ADD_TEST(s, test_ft_lstclear_null_lst);
	SUITE_ADD_TEST(s, test_ft_lstclear_null_pointer_lst);
	SUITE_ADD_TEST(s, test_ft_lstclear_null_del);
	return (s);
}

/****************************/
/*         FT_LSTITER       */
/****************************/

static void	rot47_str(void *s)
{
	char	*str = (char *)s;

	g_fct_called++;
	while (str && *str)
	{
		if (*str >= 33 && *str <= 126)
			*str = (33 + (*str + 14) % 94);
		str++;
	}
}

void	test_ft_lstiter_basic(CuTest *tc)
{
	void	(*ft_lstiter)(t_list*, void(*)(void*)) = get_fun("ft_lstiter");
	char	*s1;
	char	*s2;
	char	ex1[] = "s@ J@F <?@H (C@?8 (2J r@CC:82?n";
	char	ex2[] = "*@F D9@F=5 :?G6DE:82E6P";
	t_list	*node1;
	t_list	*node2;
	t_list	*lst;

	printf("\n########## FT_LSTITER #########\n");
	sprintf(buff.txt, "%s: lst set to a basic list, f to a rot47 function.\n", __func__);
	s1 = strdup("Do you know Wrong Way Corrigan?");
	s2 = strdup("You should investigate!");
	if (!s1 || !s2 || !(node1 = lstnew(s1)) || !(node2 = lstnew(s2)))
		exit(EXIT_FAILURE);
	lst = node1;
	lst->next = node2;
	SANDBOX(ft_lstiter(lst, rot47_str););
	CuAssert(tc, "FT_LSTITER CRASH WITH BASIC INPUTS", !WIFSIGNALED(g_exit_code));
	g_fct_called = 0;
	ft_lstiter(lst, rot47_str);
	CuAssert(tc, "ft_lstiter doesn't call enough f", g_fct_called == 2);
	CuAssert(tc, "ft_lstiter doesn't call f on first node", !strcmp(ex1, s1));
	CuAssert(tc, "ft_lstiter doesn't call f on second node", !strcmp(ex2, s2));
	CuAssert(tc, "ft_lstiter changes order of nodes", lst == node1 && lst->next == node2);
	free(s1);
	free(s2);
	free(node1);
	free(node2);
}

void	test_ft_lstiter_null_lst(CuTest *tc)
{
	void	(*ft_lstiter)(t_list*, void(*)(void*)) = get_fun("ft_lstiter");
	t_list	*lst = NULL;

	sprintf(buff.txt, "%s: lst set to null, f to a rot47 function.\n", __func__);
	SANDBOX(ft_lstiter(lst, rot47_str););
	CuAssert(tc, "FT_LSTITER CRASH WITH NULL LST", !WIFSIGNALED(g_exit_code));
	g_fct_called = 0;
	ft_lstiter(lst, rot47_str);
	CuAssert(tc, "ft_lstiter calls f when lst is NULL (WHY?)", g_fct_called == 0);
}

void	test_ft_lstiter_null_f(CuTest *tc)
{
	void	(*ft_lstiter)(t_list*, void(*)(void*)) = get_fun("ft_lstiter");
	char	*s1;
	char	*s2;
	char	ex1[] = "Do you know Wrong Way Corrigan?";
	char	ex2[] = "You should investigate!";
	t_list	*node1;
	t_list	*node2;
	t_list	*lst;

	sprintf(buff.txt, "%s: lst set to a basic list, f to null.\n", __func__);
	s1 = strdup("Do you know Wrong Way Corrigan?");
	s2 = strdup("You should investigate!");
	if (!s1 || !s2 || !(node1 = lstnew(s1)) || !(node2 = lstnew(s2)))
		exit(EXIT_FAILURE);
	lst = node1;
	lst->next = node2;
	SANDBOX(ft_lstiter(lst, NULL););
	CuAssert(tc, "FT_LSTITER CRASH WITH NULL F", !WIFSIGNALED(g_exit_code));
	ft_lstiter(lst, NULL);
	CuAssert(tc, "ft_lstiter changes something with null f", !strcmp(ex1, s1) && !strcmp(ex2, s2));
	CuAssert(tc, "ft_lstiter changes order of nodes", lst == node1 && lst->next == node2);
	free(s1);
	free(s2);
	free(node1);
	free(node2);
}

CuSuite	*ft_lstiter_get_suite()
{
	CuSuite	*s = CuSuiteNew();
	SUITE_ADD_TEST(s, test_ft_lstiter_basic);
	SUITE_ADD_TEST(s, test_ft_lstiter_null_lst);
	SUITE_ADD_TEST(s, test_ft_lstiter_null_f);
	return (s);
}

/****************************/
/*         FT_LSTMAP        */
/****************************/

CuSuite	*ft_lstmap_get_suite()
{
	CuSuite	*s = CuSuiteNew();

	return (s);
}

/****************************/
/*        RUN TESTS         */
/****************************/

void	run_all(char *particular_fun, void *fun)
{
	CuString	*output = CuStringNew();
	CuSuite		*suite = CuSuiteNew();
	int			i;

	if (particular_fun)
		CuSuiteAddSuite(suite, ((CuSuite *(*)(void))fun)());
	else
	{
		for (i = 0; i < N_TESTS_FUN; i++)
			if (fcts[i].fun_name && fcts[i].fun)
				if (fcts[i].test_fun)
					CuSuiteAddSuite(suite, ((CuSuite * (*)(void))fcts[i].test_fun)());
	}
	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	if (particular_fun)
		printf("\n\n%s: ", particular_fun);
	else
		printf("\n\nlibft: ");
	for (i = 0; output->buffer[i] && output->buffer[i] != '\n'; i++)
	{
		if (output->buffer[i] == '.')
			printf("%s%c%s", ANSI_COLOR_GREEN, output->buffer[i], ANSI_COLOR_RESET);
		else
			printf("%s%c%s", ANSI_COLOR_RED, output->buffer[i], ANSI_COLOR_RESET);
	}
	if (!strncmp(&output->buffer[i], "\n\nOK", 3))
		printf("%s%s%s",ANSI_COLOR_GREEN, &output->buffer[i], ANSI_COLOR_RESET);
	else
		printf("%s%s%s\n",ANSI_COLOR_RED, &output->buffer[i], ANSI_COLOR_RESET);
	if (!particular_fun)
		for (i = 0; i < N_TESTS_FUN; i++)
			if (fcts[i].fun_name && !fcts[i].fun)
				printf("%sMISSING %s.%s\n", ANSI_COLOR_RED, fcts[i].fun_name, ANSI_COLOR_RESET);
}

int	main(int argc, char *argv[])
{
	char	*fun_name = NULL;
	void	*lib;
	void	*test_fun;

	if (argc > 1)
		fun_name = strdup(argv[1]);
	lib = init_fcts();
	printf("\n\n");
	test_fun = get_test_fun(fun_name);
	if (fun_name && test_fun)
		run_all(fun_name,test_fun);
	else if (fun_name)
		printf("%sfunction %s not found.\n%s", ANSI_COLOR_RED,fun_name, ANSI_COLOR_RESET);
	else
		run_all(NULL, NULL);
	dlclose(lib);
	/* run_test_ft_isalpha(); */
	/* run_test_ft_isdigit(); */
	/* run_test_ft_isalnum(); */
	/* run_test_ft_isascii(); */
	/* run_test_ft_isprint(); */
	/* run_test_ft_strlen(); */
	/* run_test_ft_memset(); */
	return (0);
}

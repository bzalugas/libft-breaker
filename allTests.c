/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allTests.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:12:12 by bazaluga          #+#    #+#             */
/*   Updated: 2023/11/12 16:27:59 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lftest.h"

/****************************/
/*        FT_ISALPHA        */
/****************************/

void	test_ft_isalpha_basic(CuTest *tc)
{
	char	c;

	printf("\n########## FT_ISALPHA ##########\n");
	printf("ft_isalpha: Basic inputs (-128 => 127)\n");
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
	char	c;

	printf("\n########## FT_ISDIGIT ##########\n");
	printf("ft_isdigit: Basic inputs (-128 => 127)\n");
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
	char	c;

	printf("\n########## FT_ISALNUM ##########\n");
	printf("ft_isalnum: Basic inputs (-128 => 127)\n");
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
	char	c;

	printf("\n########## FT_ISASCII ##########\n");
	printf("ft_isascii: Normal inputs (-128 => 127)\n");
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
	char	c;

	printf("\n########## FT_ISPRINT ##########\n");
	printf("ft_isprint: Normal inputs (-128 => 127)\n");
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
	char	*s;
	int		res1;
	int		res2;
	int		fd[2];

	s = strdup("Bonjour a tous !");
	printf("\n########### FT_STRLEN ##########\n");
	printf("%s: input <%s>\n", __func__,s);
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
	char		*s;
	int			return1;
	int			return2;

	s = NULL;
	printf("%s: input <%s>\n", __func__, s);
	SANDBOX((void)strlen(s););
	return1 = g_exit_code;
	SANDBOX(ft_strlen(s););
	return2 = g_exit_code;
	CuAssert(tc, "ft_strlen doen't crash when it should.", !(WIFSIGNALED(return1) && WCOREDUMP(return1) &&  !WIFSIGNALED(return2) && !WCOREDUMP(return2)));
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
	size_t		size = 23;
	char		b1[BUFFSIZE];
	char		b2[BUFFSIZE];
	void		*res = (void*)0x23;

	memset(b1, 'b', BUFFSIZE);
	memset(b2, 'b', BUFFSIZE);
	printf("\n########### FT_MEMSET ##########\n");
	printf("%s: s = %s, c = %d, n = %lu\n", __func__,b2, 'A', size);
	memset(b1, 'z', size);
	SANDBOX(ft_memset(b2, 'z', size););
	CuAssert(tc, "ft_memset crash when it souldn't.", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	res = ft_memset(b2, 'z', size);
	CuAssertPtrEquals_Msg(tc, "Bad return adress", b2, res);
	CuAssertStrEquals_Msg(tc, "Results differents", b1, b2);

}

void	test_ft_memset_cut_string(CuTest *tc)
{
	size_t		size = 23;
	char		b1[BUFFSIZE];
	char		b2[BUFFSIZE];
	void		*res = (void*)0x23;

	memset(b1, 'b', BUFFSIZE);
	memset(b2, 'b', BUFFSIZE);
	b1[5] = '\0';
	b2[5] = '\0';
	printf("%s: s = %s, c = %d, n = %lu\n", __func__,b2, 'A', size);
	memset(b1, 'A', size);
	SANDBOX(res = ft_memset(b2, 'A', size););
	CuAssert(tc, "ft_memset crash when it souldn't.", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	res = ft_memset(b2, 'A', size);
	CuAssertPtrEquals_Msg(tc, "Bad return adress", b2, res);
	CuAssert(tc, "ft_memset doesn't work if string is cut", !memcmp(b1, b2, BUFFSIZE));
}

void	test_ft_memset_not_char(CuTest *tc)
{
	size_t	size = 23;
	char	b1[BUFFSIZE];
	char	b2[BUFFSIZE];
	void	*res = (void*)0x23;

	memset(b1, 'b', BUFFSIZE);
	memset(b2, 'b', BUFFSIZE);
	printf("%s: s = %s, c = %d, n = %lu\n", __func__,b2, '\200', size);
	memset(b1, '\200', size);
	SANDBOX(res = ft_memset(b2, '\200', size););
	CuAssert(tc, "ft_memset crash when it souldn't.", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	res = ft_memset(b2, '\200', size);
	CuAssertPtrEquals_Msg(tc, "Bad return adress", b2, res);
	CuAssertStrEquals_Msg(tc, "ft_memset doesn't cast to unsigned char", b1, b2);
}

void	test_ft_memset_same_return(CuTest *tc)
{
	size_t	size = 23;
	char	b1[BUFFSIZE];
	char	tmp[BUFFSIZE];
	void	*res1 = (void*)0x23;
	void	*res2 = (void*)0x23;

	memset(b1, 'b', BUFFSIZE);
	printf("%s: s = %s, c = %d, n = %lu\n", __func__,b1, 'z', size);
	res1 = memset(b1, 'z', size);
	strncpy(tmp, b1, BUFFSIZE);
	memset(b1, 'b', BUFFSIZE);
	SANDBOX(res2 = ft_memset(b1, 'z', size););
	CuAssert(tc, "ft_memset crash when it souldn't.", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	res2 = ft_memset(b1, 'z', size);
	CuAssertPtrEquals_Msg(tc, "Bad return adress", res1, res2);
	CuAssertStrEquals_Msg(tc, "Different str modifs", tmp, b1);
}

void	test_ft_memset_size_zero(CuTest *tc)
{
	size_t	size = 0;
	char	b1[BUFFSIZE];
	char	b2[BUFFSIZE];
	void	*res = (void*)0x23;

	memset(b1, 'b', BUFFSIZE);
	memset(b2, 'b', BUFFSIZE);
	printf("%s: s = %s, c = %d, n = %lu\n", __func__,b1, 'z', size);
	memset(b1, 'z', size);
	SANDBOX(res = ft_memset(b2, 'z', size););
	CuAssert(tc, "ft_memset crash when it souldn't.", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	res = ft_memset(b2, 'z', size);
	CuAssertPtrEquals_Msg(tc, "Bad return adress", b2, res);
	CuAssertStrEquals_Msg(tc, "ft_memset modify something when size = 0", b1, b2);
}

void	test_ft_memset_null(CuTest *tc)
{
	size_t	size = 23;
	int		st1;
	int		st2;
	char	*b = NULL;

	printf("%s: s = %s, c = %d, n = %lu\n", __func__,b, 'z', size);
	SANDBOX(memset(b, 'z', size););
	st1 = g_exit_code;
	SANDBOX(ft_memset(b, 'z', size););
	st2 = g_exit_code;
	CuAssert(tc, "ft_memset crash when it souldn't.", !(!WIFSIGNALED(st1) && WIFSIGNALED(st2)));
	CuAssert(tc, "memset crash but ft_memset doesn't.", !(WIFSIGNALED(st1) && !WIFSIGNALED(st2)));
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
	size_t	n = 20;
	char	s1[BUFFSIZE];
	char	s2[BUFFSIZE];

	memset(s1, 'A', BUFFSIZE);
	memset(s2, 'A', BUFFSIZE);
	printf("\n########### FT_BZERO ###########\n");
	printf("%s: s = %s, n = %lu\n", __func__,s1, n);
	bzero(s1, n);
	SANDBOX(ft_bzero(s2, n););
	CuAssert(tc, "ft_bzero crash when it shouldn't", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	ft_bzero(s2, n);
	CuAssert(tc, "Results different", !memcmp(s1, s2, BUFFSIZE));
}

void	test_ft_bzero_size_zero(CuTest *tc)
{
	size_t	n = 0;
	char	s1[BUFFSIZE];
	char	s2[BUFFSIZE];

	memset(s1, 'A', BUFFSIZE);
	memset(s2, 'A', BUFFSIZE);
	printf("%s: s = %s, n = %lu\n", __func__,s1, n);
	SANDBOX(ft_bzero(s2, n););
	CuAssert(tc, "ft_bzero crash when it shouldn't", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	bzero(s1, n);
	ft_bzero(s2, n);
	CuAssert(tc, "ft_bzero change something with size 0", !memcmp(s1, s2, BUFFSIZE));
}


void	test_ft_bzero_null(CuTest *tc)
{
	size_t	n = BUFFSIZE;
	char	*s1 = NULL;
	int		ret1;
	int		ret2;

	printf("%s: s = %s, n = %lu\n", __func__,s1, n);
	SANDBOX(bzero(s1, n););
	ret1 = g_exit_code;
	SANDBOX(ft_bzero(s1, n););
	ret2 = g_exit_code;
	CuAssert(tc, "ft_bzero crash when it shouldn't", !(!WIFSIGNALED(ret1) && WIFSIGNALED(ret2) && WCOREDUMP(g_exit_code)));
	CuAssert(tc, "ft_bzero doesn't crash when it should", !(WIFSIGNALED(ret1) && WCOREDUMP(ret1) && !WIFSIGNALED(ret2)));
	CuAssertIntEquals_Msg(tc, "Bad exit code", ret1, ret2);
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
	printf("%s: src = %s, n = %lu\n", __func__,src, n);
	memcpy(dst1, src, n);
	SANDBOX(ft_memcpy(dst2, src, n););
	CuAssert(tc, "ft_memcpy crash when it shouldn't", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	res1 = ft_memcpy(dst2, src, n);
	CuAssertPtrEquals_Msg(tc, "Bad return", dst2, res1);
	CuAssert(tc, "Wrong copy", !memcmp(dst1, dst2, BUFFSIZE));
}

void	test_ft_memcpy_small_size(CuTest *tc)
{
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	char	src[BUFFSIZE];
	size_t	n;
	void	*res1;

	bzero(dst1, BUFFSIZE);
	bzero(dst2, BUFFSIZE);
	n = strlen("small size test") - 5;
	strcpy(src, "small size test");
	printf("%s: src = %s, n = %lu\n", __func__,src, n);
	memcpy(dst1, src, n);
	SANDBOX(ft_memcpy(dst2, src, n););
	CuAssert(tc, "ft_memcpy crash when it shouldn't.", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	res1 = ft_memcpy(dst2, src, n);
	CuAssertPtrEquals_Msg(tc, "Bad return", dst2, res1);
	CuAssert(tc, "Wrong copy", !memcmp(dst1, dst2, BUFFSIZE));
}

void	test_ft_memcpy_size_zero(CuTest *tc)
{
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	char	src[BUFFSIZE];
	size_t	n;
	void	*res1;

	bzero(dst1, BUFFSIZE);
	bzero(dst2, BUFFSIZE);
	n = 0;
	strcpy(src, "size 0 test");
	printf("%s: src = %s, n = %lu\n", __func__,src, n);
	memcpy(dst1, src, n);
	SANDBOX(ft_memcpy(dst2, src, n););
	CuAssert(tc, "ft_memcpy crash when it shouldn't.", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	res1 = ft_memcpy(dst2, src, n);
	CuAssertPtrEquals_Msg(tc, "Bad return", dst2, res1);
	CuAssert(tc, "Wrong copy", !memcmp(dst1, dst2, BUFFSIZE));
}

void	test_ft_memcpy_same_src_dst(CuTest *tc)
{
	char	src[BUFFSIZE];
	char	*dst1 = src;
	char	*dst2 = src;
	size_t	n;
	void	*res1;
	void	*res2;

	n = strlen("Basic test memcpy.");
	strcpy(src, "Basic test memcpy.");
	printf("%s: src = %s, n = %lu\n", __func__,src, n);
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
	char	*dst1 = NULL;
	char	*dst2 = NULL;
	char	src[BUFFSIZE];
	size_t	n;
	void	*res1;
	void	*res2;
	int		exit1;
	int		exit2;

	n = strlen("null dest test");
	strcpy(src, "null dest test");
	printf("%s: src = %s, n = %lu\n", __func__,src, n);
	SANDBOX(memcpy(dst1, src, n););
	exit1 = g_exit_code;
	SANDBOX(ft_memcpy(dst2, src, n););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_memcpy doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_memcpy crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	CuAssertIntEquals_Msg(tc, "Bad exit code", exit1, exit2);
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = memcpy(dst1, src, n);
		res2 = ft_memcpy(dst2, src, n);
		CuAssertPtrEquals_Msg(tc, "Bad return", res1, res2);
		CuAssert(tc, "Wrong copy", !memcmp(dst1, dst2, BUFFSIZE));
	}
}

void	test_ft_memcpy_null_source(CuTest *tc)
{
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	char	*src = NULL;
	size_t	n;
	void	*res2;
	int		exit1;
	int		exit2;

	n = strlen("null src test");
	bzero(dst1, BUFFSIZE);
	bzero(dst2, BUFFSIZE);
	printf("%s: src = %s, n = %lu\n", __func__,src, n);
	SANDBOX(memcpy(dst1, src, n););
	exit1 = g_exit_code;
	SANDBOX(ft_memcpy(dst2, src, n););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_memcpy doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_memcpy crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	CuAssertIntEquals_Msg(tc, "Bad exit code", exit1, exit2);
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		memcpy(dst1, src, n);
		res2 = ft_memcpy(dst2, src, n);
		CuAssertPtrEquals_Msg(tc, "Bad return", res2, dst2);
		CuAssert(tc, "Wrong copy", !memcmp(dst1, dst2, BUFFSIZE));
	}
}

void	test_ft_memcpy_null_dest_and_src(CuTest *tc)
{
	char	*dst1 = NULL;
	char	*dst2 = NULL;
	char	*src = NULL;
	size_t	n;
	void	*res1;
	void	*res2;
	int		exit1;
	int		exit2;

	n = strlen("null dst & src test");
	printf("%s: src = %s, n = %lu\n", __func__,src, n);
	SANDBOX(memcpy(dst1, src, n););
	exit1 = g_exit_code;
	SANDBOX(ft_memcpy(dst2, src, n););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_memcpy doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_memcpy crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	CuAssertIntEquals_Msg(tc, "Bad exit code", exit1, exit2);
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = memcpy(dst1, src, n);
		res2 = ft_memcpy(dst2, src, n);
		CuAssertPtrEquals_Msg(tc, "Different return values", res1, res2);
		CuAssertPtrEquals_Msg(tc, "Bad return", res2, dst2);
	}
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
	printf("%s: src = %s, n = %lu\n", __func__,src, n);
	memmove(dst1, src, n);
	SANDBOX(ft_memmove(dst2, src, n););
	CuAssert(tc, "ft_memmove crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res = ft_memmove(dst2, src, n);
	CuAssertPtrEquals_Msg(tc, "Bad return", dst2, res);
	CuAssert(tc, "Bad behavior of ft_memmove", !memcmp(dst1, dst2, BUFFSIZE));
}

void	test_ft_memmove_same_src_dst(CuTest *tc)
{
	char	src[BUFFSIZE];
	char	*dst1 = src;
	char	*dst2 = src;
	void	*res1;
	void	*res2;
	size_t	n;

	n = strlen("Testing ft_memmove");
	strcpy(src, "Testing ft_memmove");
	printf("%s: src = %s, n = %lu\n", __func__,src, n);
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
	printf("%s: src = %s, n = %lu\n", __func__,src1, n);
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
	printf("%s: src = %s, n = %lu\n", __func__,src1, n);
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
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	void	*res;
	char	src[BUFFSIZE];
	size_t	n;

	bzero(dst1, BUFFSIZE);
	bzero(dst2, BUFFSIZE);
	n = 5;
	strcpy(src, "Testing ft_memmove");
	printf("%s: src = %s, n = %lu\n", __func__,src, n);
	memmove(dst1, src, n);
	SANDBOX(ft_memmove(dst2, src, n););
	CuAssert(tc, "ft_memmove crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res = ft_memmove(dst2, src, n);
	CuAssertPtrEquals_Msg(tc, "Bad return", dst2, res);
	CuAssert(tc, "Bad behavior of ft_memmove", !memcmp(dst1, dst2, BUFFSIZE));
}

void	test_ft_memmove_size_zero(CuTest *tc)
{
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	void	*res;
	char	src[BUFFSIZE];
	size_t	n;

	bzero(dst1, BUFFSIZE);
	bzero(dst2, BUFFSIZE);
	n = 0;
	strcpy(src, "Testing ft_memmove");
	printf("%s: src = %s, n = %lu\n", __func__,src, n);
	memmove(dst1, src, n);
	SANDBOX(ft_memmove(dst2, src, n););
	CuAssert(tc, "ft_memmove crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res = ft_memmove(dst2, src, n);
	CuAssertPtrEquals_Msg(tc, "Bad return", dst2, res);
	CuAssert(tc, "Bad behavior of ft_memmove", !memcmp(dst1, dst2, BUFFSIZE));
}

void	test_ft_memmove_null_dst(CuTest *tc)
{
	char	*dst1 = NULL;
	char	*dst2 = NULL;
	char	src[BUFFSIZE];
	size_t	n;
	void	*res1;
	void	*res2;
	int		exit1;
	int		exit2;

	n = strlen("Testing ft_memmove");
	strcpy(src, "Testing ft_memmove");
	printf("%s: src = %s, n = %lu\n", __func__,src, n);
	SANDBOX(memmove(dst1, src, n););
	exit1 = g_exit_code;
	SANDBOX(ft_memmove(dst2, src, n););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_memmove doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_memmove crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	CuAssertIntEquals_Msg(tc, "Bad exit code", exit1, exit2);
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = memmove(dst1, src, n);
		res2 = ft_memmove(dst2, src, n);
		CuAssertPtrEquals_Msg(tc, "Bad return", res1, res2);
		CuAssert(tc, "Wrong copy", !memcmp(dst1, dst2, BUFFSIZE));
	}
}

void	test_ft_memmove_null_src(CuTest *tc)
{
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	char	*src = NULL;
	size_t	n;
	void	*res2;
	int		exit1;
	int		exit2;

	n = strlen("Testing ft_memmove");
	bzero(dst1, BUFFSIZE);
	bzero(dst2, BUFFSIZE);
	printf("%s: src = %s, n = %lu\n", __func__,src, n);
	SANDBOX(memmove(dst1, src, n););
	exit1 = g_exit_code;
	SANDBOX(ft_memmove(dst2, src, n););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_memmove doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_memmove crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	CuAssertIntEquals_Msg(tc, "Bad exit code", exit1, exit2);
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		memmove(dst1, src, n);
		res2 = ft_memmove(dst2, src, n);
		CuAssertPtrEquals_Msg(tc, "Bad return", res2, dst2);
		CuAssert(tc, "Wrong copy", !memcmp(dst1, dst2, BUFFSIZE));
	}
}

void	test_ft_memmove_null_dest_and_src(CuTest *tc)
{
	char	*dst1 = NULL;
	char	*dst2 = NULL;
	char	*src = NULL;
	size_t	n;
	void	*res1;
	void	*res2;
	int		exit1;
	int		exit2;

	n = strlen("Testing ft_memmove");
	printf("%s: src = %s, n = %lu\n", __func__,src, n);
	SANDBOX(memmove(dst1, src, n););
	exit1 = g_exit_code;
	SANDBOX(ft_memmove(dst2, src, n););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_memmove doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_memmove crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	CuAssertIntEquals_Msg(tc, "Bad exit code", exit1, exit2);
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = memmove(dst1, src, n);
		res2 = ft_memmove(dst2, src, n);
		CuAssertPtrEquals_Msg(tc, "Different return values", res1, res2);
		CuAssertPtrEquals_Msg(tc, "Bad return", res2, dst2);
	}
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
	printf("%s:\n\tsrc = %s (len = %lu), size = %lu\n", __func__, src, strlen(src), size);
	res1 = strlcpy(dst1, src, size);
	SANDBOX(ft_strlcpy(dst2, src, size););
	CuAssert(tc, "ft_strlcpy crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strlcpy(dst2, src, size);
	CuAssertStrEquals(tc, dst1, dst2);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strlcpy_small_size(CuTest *tc)
{
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
	printf("%s:\n\tsrc = %s (len = %lu), size = %lu\n", __func__, src, strlen(src), size);
	res1 = strlcpy(dst1, src, size);
	SANDBOX(ft_strlcpy(dst2, src, size););
	CuAssert(tc, "ft_strlcpy crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strlcpy(dst2, src, size);
	CuAssertStrEquals(tc, dst1, dst2);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strlcpy_bigger_size(CuTest *tc)
{
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
	printf("%s:\n\tsrc = %s (len = %lu), size = %lu\n", __func__, src, strlen(src), size);
	res1 = strlcpy(dst1, src, size);
	SANDBOX(ft_strlcpy(dst2, src, size););
	CuAssert(tc, "ft_strlcpy crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strlcpy(dst2, src, size);
	CuAssert(tc, "Bad copy", !memcmp(dst1, dst2, BUFFSIZE));
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strlcpy_size_zero(CuTest *tc)
{
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
	printf("%s:\n\tsrc = %s (len = %lu), size = %lu\n", __func__, src, strlen(src), size);
	res1 = strlcpy(dst1, src, size);
	SANDBOX(ft_strlcpy(dst2, src, size););
	CuAssert(tc, "ft_strlcpy crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_strlcpy(dst2, src, size);
	CuAssert(tc, "Bad copy", !memcmp(dst1, dst2, BUFFSIZE));
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strlcpy_dst_too_small(CuTest *tc)
{
	char	src1[BUFFSIZE];
	char	src2[BUFFSIZE];
	char	dst1[5];
	char	dst2[5];
	size_t	size;
	size_t	res1;
	size_t	res2;
	int		exit1;
	int		exit2;

	memset(src1, 'a', BUFFSIZE - 1);
	memset(src2, 'a', BUFFSIZE - 1);
	src1[BUFFSIZE - 1] = '\0';
	src2[BUFFSIZE - 1] = '\0';
	bzero(dst1, 5);
	bzero(dst2, 5);
	size = BUFFSIZE;
	printf("%s:\n\tsrc = %s (len = %lu), size = %lu\n", __func__, src1, strlen(src1), size);
	SANDBOX(strlcpy(dst1, src1, size););
	exit1 = g_exit_code;
	SANDBOX(ft_strlcpy(dst2, src2, size););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strlcpy crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strlcpy doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	res1 = strlcpy(dst1, src1, size);
	res2 = ft_strlcpy(dst2, src2, size);
	CuAssert(tc, "Bad copy", !memcmp(dst1, dst2, 5));
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strlcpy_dst_overlap_src(CuTest *tc)
{
	char	mem1[BUFFSIZE];
	char	mem2[BUFFSIZE];
	char	*dst1 = &mem1[0];
	char	*src1 = &mem1[5];
	char	*dst2 = &mem2[0];
	char	*src2 = &mem2[5];
	size_t	size;
	size_t	res1;
	size_t	res2;
	int		exit1;
	int		exit2;

	bzero(mem1, BUFFSIZE);
	bzero(mem2, BUFFSIZE);
	memset(src1, 'a', 10);
	memset(src2, 'a', 10);
	size = strlen(src1) + 1;
	printf("%s:\n\tsrc = %s (len = %lu), size = %lu\n", __func__, src1, strlen(src1), size);
	SANDBOX(strlcpy(dst1, src1, size););
	exit1 = g_exit_code;
	SANDBOX(ft_strlcpy(dst2, src2, size););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strlcpy crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strlcpy doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	res1 = strlcpy(dst1, src1, size);
	res2 = ft_strlcpy(dst2, src2, size);
	CuAssert(tc, "Bad copy", !memcmp(mem1, mem2, BUFFSIZE));
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strlcpy_src_overlap_dst(CuTest *tc)
{
	char	mem1[BUFFSIZE];
	char	mem2[BUFFSIZE];
	char	*dst1 = &mem1[5];
	char	*src1 = &mem1[0];
	char	*dst2 = &mem2[5];
	char	*src2 = &mem2[0];
	size_t	size;
	size_t	res1;
	size_t	res2;
	int		exit1;
	int		exit2;

	bzero(mem1, BUFFSIZE);
	bzero(mem2, BUFFSIZE);
	memset(src1, 'a', BUFFSIZE - 1);
	memset(src2, 'a', BUFFSIZE - 1);
	src1[10] = '\0';
	src2[10] = '\0';
	size = strlen(src1) + 1;
	printf("%s:\n\tsrc = %s (len = %lu), size = %lu\n", __func__, src1, strlen(src1), size);
	SANDBOX(strlcpy(dst1, src1, size););
	exit1 = g_exit_code;
	SANDBOX(ft_strlcpy(dst2, src2, size););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strlcpy crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strlcpy doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	res1 = strlcpy(dst1, src1, size);
	res2 = ft_strlcpy(dst2, src2, size);
	CuAssert(tc, "Bad copy", !memcmp(mem1, mem2, BUFFSIZE));
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_strlcpy_null_dst(CuTest *tc)
{
	char	*dst = NULL;
	char	src1[BUFFSIZE];
	char	src2[BUFFSIZE];
	size_t	size;
	size_t	res1;
	size_t	res2;
	int		exit1;
	int		exit2;

	memset(src1, 'a', BUFFSIZE - 1);
	memset(src2, 'a', BUFFSIZE - 1);
	src1[BUFFSIZE - 1] = '\0';
	src2[BUFFSIZE - 1] = '\0';
	size = strlen(src1) + 1;
	printf("%s:\n\tsrc = %s (len = %lu), size = %lu\n", __func__, src1, strlen(src1), size);
	SANDBOX(strlcpy(dst, src1, size););
	exit1 = g_exit_code;
	SANDBOX(ft_strlcpy(dst, src2, size););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strlcpy crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strlcpy doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strlcpy(dst, src1, size);
		res2 = ft_strlcpy(dst, src2, size);
		CuAssertIntEquals(tc, res1, res2);
	}
}

void	test_ft_strlcpy_null_src(CuTest *tc)
{
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	char	*src = NULL;
	size_t	size;
	size_t	res1;
	size_t	res2;
	int		exit1;
	int		exit2;

	bzero(dst1, BUFFSIZE);
	bzero(dst2, BUFFSIZE);
	size = 10;
	printf("%s:\n\tsrc = %s (len = %d), size = %lu\n", __func__, src, 0, size);
	SANDBOX(strlcpy(dst1, src, size););
	exit1 = g_exit_code;
	SANDBOX(ft_strlcpy(dst2, src, size););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strlcpy crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strlcpy doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strlcpy(dst1, src, size);
		res2 = ft_strlcpy(dst2, src, size);
		CuAssertStrEquals(tc, dst1, dst2);
		CuAssertIntEquals(tc, res1, res2);
	}
}

void	test_ft_strlcpy_null_dst_and_src(CuTest *tc)
{
	char	*dst = NULL;
	char	*src = NULL;
	size_t	size;
	size_t	res1;
	size_t	res2;
	int		exit1;
	int		exit2;

	size = 10;
	printf("%s:\n\tsrc = %s (len = %d), size = %lu\n", __func__, src, 0, size);
	SANDBOX(strlcpy(dst, src, size););
	exit1 = g_exit_code;
	SANDBOX(ft_strlcpy(dst, src, size););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strlcpy crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strlcpy doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strlcpy(dst, src, size);
		res2 = ft_strlcpy(dst, src, size);
		CuAssertIntEquals(tc, res1, res2);
	}
}

CuSuite *ft_strlcpy_get_suite()
{
	CuSuite	*s = CuSuiteNew();

	SUITE_ADD_TEST(s, test_ft_strlcpy_basic);
	SUITE_ADD_TEST(s, test_ft_strlcpy_small_size);
	SUITE_ADD_TEST(s, test_ft_strlcpy_bigger_size);
	SUITE_ADD_TEST(s, test_ft_strlcpy_size_zero);
	SUITE_ADD_TEST(s, test_ft_strlcpy_dst_too_small);
	SUITE_ADD_TEST(s, test_ft_strlcpy_dst_overlap_src);
	SUITE_ADD_TEST(s, test_ft_strlcpy_src_overlap_dst);
	SUITE_ADD_TEST(s, test_ft_strlcpy_null_dst);
	SUITE_ADD_TEST(s, test_ft_strlcpy_null_src);
	SUITE_ADD_TEST(s, test_ft_strlcpy_null_dst_and_src);
	return (s);
}

/****************************/
/*        RUN TESTS         */
/****************************/

void	run_all()
{
	CuString	*output = CuStringNew();
	CuSuite		*suite = CuSuiteNew();

	CuSuiteAddSuite(suite, ft_isalnum_get_suite());
	CuSuiteAddSuite(suite, ft_isalpha_get_suite());
	CuSuiteAddSuite(suite, ft_isascii_get_suite());
	CuSuiteAddSuite(suite, ft_isdigit_get_suite());
	CuSuiteAddSuite(suite, ft_isprint_get_suite());
	CuSuiteAddSuite(suite, ft_strlen_get_suite());
	CuSuiteAddSuite(suite, ft_memset_get_suite());
	CuSuiteAddSuite(suite, ft_bzero_get_suite());
	CuSuiteAddSuite(suite, ft_memcpy_get_suite());
	CuSuiteAddSuite(suite, ft_memmove_get_suite());
	CuSuiteAddSuite(suite, ft_strlcpy_get_suite());

	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("\n\nlibft: %s\n", output->buffer);
}

int	main(void)
{
	printf("\n\n");
	run_all();
	/* run_test_ft_isalpha(); */
	/* run_test_ft_isdigit(); */
	/* run_test_ft_isalnum(); */
	/* run_test_ft_isascii(); */
	/* run_test_ft_isprint(); */
	/* run_test_ft_strlen(); */
	/* run_test_ft_memset(); */
	return (0);
}

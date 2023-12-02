/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allTests.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:12:12 by bazaluga          #+#    #+#             */
/*   Updated: 2023/12/03 00:16:26 by bazaluga         ###   ########.fr       */
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
	int			return1;
	int			return2;

	s = NULL;
	sprintf(buff.txt, "%s: input <%s>\n", __func__, s);
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
	void		*(*ft_memset)(void *, int, size_t) = get_fun("ft_memset");
	size_t		size = 23;
	char		b1[BUFFSIZE];
	char		b2[BUFFSIZE];
	void		*res = (void*)0x23;

	memset(b1, 'b', BUFFSIZE);
	memset(b2, 'b', BUFFSIZE);
	printf("\n########### FT_MEMSET ##########\n");
	sprintf(buff.txt, "%s: s = %s, c = %d, n = %lu\n", __func__,b2, 'A', size);
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
	b1[5] = '\0';
	b2[5] = '\0';
	sprintf(buff.txt, "%s: s = %s, c = %d, n = %lu\n", __func__,b2, 'A', size);
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
	sprintf(buff.txt, "%s: s = %s, c = %d, n = %lu\n", __func__,b2, '\200', size);
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
	sprintf(buff.txt, "%s: s = %s, c = %d, n = %lu\n", __func__,b1, 'z', size);
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
	void		*(*ft_memset)(void *, int, size_t) = get_fun("ft_memset");
	size_t	size = 0;
	char	b1[BUFFSIZE];
	char	b2[BUFFSIZE];
	void	*res = (void*)0x23;

	memset(b1, 'b', BUFFSIZE);
	memset(b2, 'b', BUFFSIZE);
	sprintf(buff.txt, "%s: s = %s, c = %d, n = %lu\n", __func__,b1, 'z', size);
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
	int		st1;
	int		st2;
	char	*b = NULL;

	sprintf(buff.txt, "%s: s = %s, c = %d, n = %lu\n", __func__,b, 'z', size);
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
	void	(*ft_bzero)(void *, size_t) = get_fun("ft_bzero");
	size_t	n = 20;
	char	s1[BUFFSIZE];
	char	s2[BUFFSIZE];

	memset(s1, 'A', BUFFSIZE);
	memset(s2, 'A', BUFFSIZE);
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
	sprintf(buff.txt, "%s: s = %s, n = %lu\n", __func__,s1, n);
	SANDBOX(ft_bzero(s2, n););
	CuAssert(tc, "ft_bzero crash when it shouldn't", !(WIFSIGNALED(g_exit_code) && WCOREDUMP(g_exit_code)));
	bzero(s1, n);
	ft_bzero(s2, n);
	CuAssert(tc, "ft_bzero change something with size 0", !memcmp(s1, s2, BUFFSIZE));
}


void	test_ft_bzero_null(CuTest *tc)
{
	void	(*ft_bzero)(void *, size_t) = get_fun("ft_bzero");
	size_t	n = BUFFSIZE;
	char	*s1 = NULL;
	int		ret1;
	int		ret2;

	sprintf(buff.txt, "%s: s = %s, n = %lu\n", __func__,s1, n);
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
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
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
	void	*(*ft_memcpy)(void *, const void *, size_t) = get_fun("ft_memcpy");
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
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
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
	void	*(*ft_memcpy)(void *, const void *, size_t) = get_fun("ft_memcpy");
	char	*dst1 = NULL;
	char	*dst2 = NULL;
	char	*src = NULL;
	size_t	n;
	void	*res1;
	void	*res2;
	int		exit1;
	int		exit2;

	n = strlen("null dst & src test");
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
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
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
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
	void	*(*ft_memmove)(void *, const void *, size_t) = get_fun("ft_memmove");
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
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
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
	void	*(*ft_memmove)(void *, const void *, size_t) = get_fun("ft_memmove");
	char	*dst1 = NULL;
	char	*dst2 = NULL;
	char	*src = NULL;
	size_t	n;
	void	*res1;
	void	*res2;
	int		exit1;
	int		exit2;

	n = strlen("Testing ft_memmove");
	sprintf(buff.txt, "%s: src = %s, n = %lu\n", __func__,src, n);
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
	sprintf(buff.txt, "%s: src = %s (len = %lu), size = %lu\n", __func__, src, strlen(src), size);
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
	sprintf(buff.txt, "%s: src = %s (len = %lu), size = %lu\n", __func__, src, strlen(src), size);
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
	sprintf(buff.txt, "%s: src = %s (len = %lu), size = %lu\n", __func__, src, strlen(src), size);
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
	sprintf(buff.txt, "%s: src = %s (len = %lu), size = %lu\n", __func__, src, strlen(src), size);
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
	sprintf(buff.txt, "%s: src = %s (len = %lu), size = %lu\n", __func__, src1, strlen(src1), size);
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
	size_t	(*ft_strlcpy)(char *, const char *, size_t) = get_fun("ft_strlcpy");
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
	sprintf(buff.txt, "%s: src = %s (len = %d), size = %lu\n", __func__, src, 0, size);
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
	size_t	(*ft_strlcpy)(char *, const char *, size_t) = get_fun("ft_strlcpy");
	char	*dst = NULL;
	char	*src = NULL;
	size_t	size;
	size_t	res1;
	size_t	res2;
	int		exit1;
	int		exit2;

	size = 10;
	sprintf(buff.txt, "%s: src = %s (len = %d), size = %lu\n", __func__, src, 0, size);
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
	char	dst1[BUFFBSIZE];
	char	dst2[BUFFBSIZE];
	char	src[BUFFBSIZE];
	size_t	size;
	size_t	res1;
	size_t	res2;
	int		exit1;
	int		exit2;

	strcpy(dst1, "hello");
	strcpy(dst2, "hello");
	strcpy(src, " everyone!");
	size = strlen(dst1) + strlen(src) + 10;
	sprintf(buff.txt, "%s:\tsrc=%s(%lu), dst=%s(%lu), size=%lu\n", __func__, src, strlen(src),
			dst1, strlen(dst1), size);
	SANDBOX(res1 = strlcat(dst1, src, size););
	exit1 = g_exit_code;
	SANDBOX(ft_strlcat(dst2, src, size););
	exit2 = g_exit_code;
	CuAssert(tc, "strlcat crash but not ft_strlcat.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "strlcat doesn't crash but ft_strlcat does.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strlcat(dst1, src, size);
		res2 = ft_strlcat(dst2, src, size);
		CuAssertStrEquals(tc, dst1, dst2);
		CuAssertIntEquals(tc, res1, res2);
	}
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
	size_t	res1;
	size_t	res2;
	int		exit1;
	int		exit2;

	strcpy(src, " everyone!");
	size = strlen(src) + 1;
	sprintf(buff.txt, "%s:\tsrc=%s(%lu), dst=%s(%lu), size=%lu\n", __func__, src, strlen(src),
		   dst, (size_t)0, size);
	SANDBOX(res1 = strlcat(dst, src, size););
	exit1 = g_exit_code;
	SANDBOX(ft_strlcat(dst, src, size););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strlcat doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strlcat crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strlcat(dst, src, size);
		res2 = ft_strlcat(dst, src, size);
		CuAssertIntEquals(tc, res1, res2);
	}
}

void	test_ft_strlcat_null_dst_and_size_zero(CuTest *tc)
{
	size_t	(*ft_strlcat)(char *, const char *, size_t) = get_fun("ft_strlcat");
	char	*dst = NULL;
	char	src[BUFFSIZE];
	size_t	size;
	size_t	res1;
	size_t	res2;
	int		exit1;
	int		exit2;

	strcpy(src, " everyone!");
	size = 0;
	sprintf(buff.txt, "%s:\tsrc=%s(%lu), dst=%s(%lu), size=%lu\n", __func__, src, strlen(src),
		   dst, (size_t)0, size);
	SANDBOX(res1 = strlcat(dst, src, size););
	exit1 = g_exit_code;
	SANDBOX(ft_strlcat(dst, src, size););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strlcat doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strlcat crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strlcat(dst, src, size);
		res2 = ft_strlcat(dst, src, size);
		CuAssertIntEquals(tc, res1, res2);
	}
}

void	test_ft_strlcat_null_src(CuTest *tc)
{
	size_t	(*ft_strlcat)(char *, const char *, size_t) = get_fun("ft_strlcat");
	char	dst1[BUFFSIZE];
	char	dst2[BUFFSIZE];
	char	*src = NULL;
	size_t	size;
	size_t	res1;
	size_t	res2;
	int		exit1;
	int		exit2;

	strcpy(dst1, "hello");
	strcpy(dst2, "hello");
	size = strlen(dst1) + 1;
	sprintf(buff.txt, "%s:\tsrc=%s(%lu), dst=%s(%lu), size=%lu\n", __func__, src, (size_t)0,
		   dst1, strlen(dst1), size);
	SANDBOX(res1 = strlcat(dst1, src, size););
	exit1 = g_exit_code;
	SANDBOX(ft_strlcat(dst1, src, size););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strlcat doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strlcat crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strlcat(dst1, src, size);
		res2 = ft_strlcat(dst2, src, size);
		CuAssertIntEquals(tc, res1, res2);
	}
}

void	test_ft_strlcat_null_dst_and_src(CuTest *tc)
{
	size_t	(*ft_strlcat)(char *, const char *, size_t) = get_fun("ft_strlcat");
	char	*dst = NULL;
	char	*src = NULL;
	size_t	size;
	size_t	res1;
	size_t	res2;
	int		exit1;
	int		exit2;

	size = BUFFSIZE;
	sprintf(buff.txt, "%s:\tsrc=%s(%lu), dst=%s(%lu), size=%lu\n", __func__, src, (size_t)0,
		   dst, (size_t)0, size);
	SANDBOX(res1 = strlcat(dst, src, size););
	exit1 = g_exit_code;
	SANDBOX(ft_strlcat(dst, src, size););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strlcat doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strlcat crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strlcat(dst, src, size);
		res2 = ft_strlcat(dst, src, size);
		CuAssertIntEquals(tc, res1, res2);
	}
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
	char	*res1;
	char	*res2;
	int		exit1;
	int		exit2;

	c = 'o';
	sprintf(buff.txt, "%s: s = %s, c = %d(%c)\n", __func__, s, c, c);
	SANDBOX(res1 = strchr(s, c););
	exit1 = g_exit_code;
	SANDBOX(ft_strchr(s, c););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strchr doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strchr crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strchr(s, c);
		res2 = ft_strchr(s, c);
		CuAssertPtrEquals(tc, res1, res2);
	}
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
	char	s[BUFFSIZE];
	int		c;
	char	*res1;
	char	*res2;

	char	*(*ft_strrchr)(const char *, int) = get_fun("ft_strrchr");
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
	sprintf(buff.txt, "%s: s = %s, c = %d(%c)\n", __func__, s, c, c);
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
	char	*res1;
	char	*res2;
	int		exit1;
	int		exit2;

	c = 'o';
	sprintf(buff.txt, "%s: s = %s, c = %d(%c)\n", __func__, s, c, c);
	SANDBOX(res1 = strrchr(s, c););
	exit1 = g_exit_code;
	SANDBOX(ft_strrchr(s, c););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strrchr doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strrchr crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strrchr(s, c);
		res2 = ft_strrchr(s, c);
		CuAssertPtrEquals(tc, res1, res2);
	}
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
	int		res1;
	int		res2;
	int		exit1;
	int		exit2;

	strcpy(s2, "Triple Monstre");
	n = strlen(s2);
	sprintf(buff.txt, "%s: s1 = %s, s2 = %s, n = %lu\n", __func__, s1, s2, n);
	SANDBOX(res1 = strncmp(s1, s2, n););
	exit1 = g_exit_code;
	SANDBOX(ft_strncmp(s1, s2, n););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strncmp doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strncmp crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strncmp(s1, s2, n);
		res2 = ft_strncmp(s1, s2, n);
		CuAssertIntEquals(tc, res1, res2);
	}
}

void	test_ft_strncmp_null_s2(CuTest *tc)
{
	int		(*ft_strncmp)(const char *, const char *, size_t) = get_fun("ft_strncmp");
	char	s1[BUFFSIZE];
	char	*s2 = NULL;
	size_t	n;
	int		res1;
	int		res2;
	int		exit1;
	int		exit2;

	strcpy(s1, "Triple Monstre");
	n = strlen(s1);
	sprintf(buff.txt, "%s: s1 = %s, s2 = %s, n = %lu\n", __func__, s1, s2, n);
	SANDBOX(res1 = strncmp(s1, s2, n););
	exit1 = g_exit_code;
	SANDBOX(ft_strncmp(s1, s2, n););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strncmp doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strncmp crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strncmp(s1, s2, n);
		res2 = ft_strncmp(s1, s2, n);
		CuAssertIntEquals(tc, res1, res2);
	}
}

void	test_ft_strncmp_null_s1_and_s2_n_gt_zero(CuTest *tc)
{
	int		(*ft_strncmp)(const char *, const char *, size_t) = get_fun("ft_strncmp");
	char	*s1 = NULL;
	char	*s2 = NULL;
	size_t	n;
	int		res1;
	int		res2;
	int		exit1;
	int		exit2;

	n = 10;
	sprintf(buff.txt, "%s: s1 = %s, s2 = %s, n = %lu\n", __func__, s1, s2, n);
	SANDBOX(res1 = strncmp(s1, s2, n););
	exit1 = g_exit_code;
	SANDBOX(ft_strncmp(s1, s2, n););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strncmp doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strncmp crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strncmp(s1, s2, n);
		res2 = ft_strncmp(s1, s2, n);
		CuAssertIntEquals(tc, res1, res2);
	}
}

void	test_ft_strncmp_null_s1_and_s2_n_zero(CuTest *tc)
{
	int		(*ft_strncmp)(const char *, const char *, size_t) = get_fun("ft_strncmp");
	char	*s1 = NULL;
	char	*s2 = NULL;
	size_t	n;
	int		res1;
	int		res2;
	int		exit1;
	int		exit2;

	n = 0;
	sprintf(buff.txt, "%s: s1 = %s, s2 = %s, n = %lu\n", __func__, s1, s2, n);
	SANDBOX(res1 = strncmp(s1, s2, n););
	exit1 = g_exit_code;
	SANDBOX(ft_strncmp(s1, s2, n););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strncmp doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strncmp crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strncmp(s1, s2, n);
		res2 = ft_strncmp(s1, s2, n);
		CuAssertIntEquals(tc, res1, res2);
	}
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
	char	*res1;
	char	*res2;
	int		exit1;
	int		exit2;

	c = '\12';
	n = 14;
	sprintf(buff.txt, "%s: s=%s, c=%d, n=%lu\n", __func__, s, c, n);
	SANDBOX(res1 = memchr(s, c, n););
	exit1 = g_exit_code;
	SANDBOX(ft_memchr(s, c, n););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_memchr doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_memchr crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit1))
	{
		res1 = memchr(s, c, n);
		res2 = ft_memchr(s, c, n);
		CuAssertPtrEquals(tc, res1, res2);
	}
}

void	test_ft_memchr_null_s_2(CuTest *tc)
{
	void	*(*ft_memchr)(const void *, int, size_t) = get_fun("ft_memchr");
	char	*s = NULL;
	int		c;
	size_t	n;
	char	*res1;
	char	*res2;
	int		exit1;
	int		exit2;

	c = '\12';
	n = 0;
	sprintf(buff.txt, "%s: s=%s, c=%d, n=%lu\n", __func__, s, c, n);
	SANDBOX(res1 = memchr(s, c, n););
	exit1 = g_exit_code;
	SANDBOX(ft_memchr(s, c, n););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_memchr doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_memchr crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit1))
	{
		res1 = memchr(s, c, n);
		res2 = ft_memchr(s, c, n);
		CuAssertPtrEquals(tc, res1, res2);
	}
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
	int		(*memcmp)(const void *, const void *, size_t) = simple_memcmp;
	int		*arr1 = NULL;
	int		arr2[] = {0x01, 0x02, 0x03, 0x04, 0x05};
	size_t	n = 5;
	int		res1;
	int		res2;
	int		exit1;
	int		exit2;

	sprintf(buff.txt, "%s: s1=%s, s2=%s, n=%lu\n", __func__, (char *)arr1, (char *)arr2, n);
	SANDBOX(res1 = memcmp(arr1, arr2, n););
	exit1 = g_exit_code;
	SANDBOX(ft_memcmp(arr1, arr2, n););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_memcmp doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_memcmp crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = memcmp(arr1, arr2, n);
		res2 = ft_memcmp(arr1, arr2, n);
		CuAssertIntEquals(tc, res1, res2);
	}
}

void	test_ft_memcmp_null_s2(CuTest *tc)
{
	int		(*ft_memcmp)(const void *, const void *, size_t) = get_fun("ft_memcmp");
	int		(*memcmp)(const void *, const void *, size_t) = simple_memcmp;
	int		arr1[] = {0x01, 0x02, 0x03, 0x04, 0x05};
	int		*arr2 = NULL;
	size_t	n = 5;
	int		res1;
	int		res2;
	int		exit1;
	int		exit2;

	sprintf(buff.txt, "%s: s1=%s, s2=%s, n=%lu\n", __func__, (char *)arr1, (char *)arr2, n);
	SANDBOX(res1 = memcmp(arr1, arr2, n););
	exit1 = g_exit_code;
	SANDBOX(ft_memcmp(arr1, arr2, n););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_memcmp doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_memcmp crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = memcmp(arr1, arr2, n);
		res2 = ft_memcmp(arr1, arr2, n);
		CuAssertIntEquals(tc, res1, res2);
	}
}

void	test_ft_memcmp_null_s1_and_s2_1(CuTest *tc)
{
	int		(*ft_memcmp)(const void *, const void *, size_t) = get_fun("ft_memcmp");
	int		(*memcmp)(const void *, const void *, size_t) = simple_memcmp;
	int		*arr1 = NULL;
	int		*arr2 = NULL;
	size_t	n = 5;
	int		res1;
	int		res2;
	int		exit1;
	int		exit2;

	sprintf(buff.txt, "%s: s1=%s, s2=%s, n=%lu\n", __func__, (char *)arr1, (char *)arr2, n);
	SANDBOX(res1 = memcmp(arr1, arr2, n););
	exit1 = g_exit_code;
	SANDBOX(ft_memcmp(arr1, arr2, n););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_memcmp doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_memcmp crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = memcmp(arr1, arr2, n);
		res2 = ft_memcmp(arr1, arr2, n);
		CuAssertIntEquals(tc, res1, res2);
	}
}

void	test_ft_memcmp_null_s1_and_s2_2(CuTest *tc)
{
	int		(*ft_memcmp)(const void *, const void *, size_t) = get_fun("ft_memcmp");
	int		(*memcmp)(const void *, const void *, size_t) = simple_memcmp;
	int		*arr1 = NULL;
	int		*arr2 = NULL;
	size_t	n = 0;
	int		res1;
	int		res2;
	int		exit1;
	int		exit2;

	sprintf(buff.txt, "%s: s1=%s, s2=%s, n=%lu\n", __func__, (char *)arr1, (char *)arr2, n);
	SANDBOX(res1 = memcmp(arr1, arr2, n););
	exit1 = g_exit_code;
	SANDBOX(ft_memcmp(arr1, arr2, n););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_memcmp doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_memcmp crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = memcmp(arr1, arr2, n);
		res2 = ft_memcmp(arr1, arr2, n);
		CuAssertIntEquals(tc, res1, res2);
	}
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
	SANDBOX(ft_strnstr(big, little, len););
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
	char	*res1;
	char	*res2;
	int		exit1;
	int		exit2;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	SANDBOX(res1 = strnstr(big, little, len););
	exit1 = g_exit_code;
	SANDBOX(ft_strnstr(big, little, len););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strnstr doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strnstr crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strnstr(big, little, len);
		res2 = ft_strnstr(big, little, len);
		CuAssertPtrEquals(tc, res1, res2);
	}
}

void	test_ft_strnstr_null_big_2(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	*big = NULL;
	char	little[] = "TRIPLE";
	size_t	len = 0;
	char	*res1;
	char	*res2;
	int		exit1;
	int		exit2;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	SANDBOX(res1 = strnstr(big, little, len););
	exit1 = g_exit_code;
	SANDBOX(ft_strnstr(big, little, len););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strnstr doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strnstr crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strnstr(big, little, len);
		res2 = ft_strnstr(big, little, len);
		CuAssertPtrEquals(tc, res1, res2);
	}
}

void	test_ft_strnstr_null_little_1(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	big[] = "TRIPLE MONSTRE (COUCOU)";
	char	*little = NULL;
	size_t	len = 16;
	char	*res1;
	char	*res2;
	int		exit1;
	int		exit2;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	SANDBOX(res1 = strnstr(big, little, len););
	exit1 = g_exit_code;
	SANDBOX(ft_strnstr(big, little, len););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strnstr doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strnstr crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strnstr(big, little, len);
		res2 = ft_strnstr(big, little, len);
		CuAssertPtrEquals(tc, res1, res2);
	}
}

void	test_ft_strnstr_null_little_2(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	big[] = "TRIPLE MONSTRE (COUCOU)";
	char	*little = NULL;
	size_t	len = 0;
	char	*res1;
	char	*res2;
	int		exit1;
	int		exit2;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	SANDBOX(res1 = strnstr(big, little, len););
	exit1 = g_exit_code;
	SANDBOX(ft_strnstr(big, little, len););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strnstr doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strnstr crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strnstr(big, little, len);
		res2 = ft_strnstr(big, little, len);
		CuAssertPtrEquals(tc, res1, res2);
	}
}

void	test_ft_strnstr_null_big_and_little_1(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	*big = NULL;
	char	*little = NULL;
	size_t	len = 16;
	char	*res1;
	char	*res2;
	int		exit1;
	int		exit2;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	SANDBOX(res1 = strnstr(big, little, len););
	exit1 = g_exit_code;
	SANDBOX(ft_strnstr(big, little, len););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strnstr doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strnstr crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strnstr(big, little, len);
		res2 = ft_strnstr(big, little, len);
		CuAssertPtrEquals(tc, res1, res2);
	}
}

void	test_ft_strnstr_null_big_and_little_2(CuTest *tc)
{
	char	*(*ft_strnstr)(const char *, const char *, size_t) = get_fun("ft_strnstr");
	char	*big = NULL;
	char	*little = NULL;
	size_t	len = 0;
	char	*res1;
	char	*res2;
	int		exit1;
	int		exit2;

	sprintf(buff.txt, "%s: big=%s, little=%s, len=%lu\n", __func__, big, little, len);
	SANDBOX(res1 = strnstr(big, little, len););
	exit1 = g_exit_code;
	SANDBOX(ft_strnstr(big, little, len););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strnstr doesn't crash when it should.", !(WIFSIGNALED(exit1) && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strnstr crash when it shouldn't.", !(!WIFSIGNALED(exit1) && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = strnstr(big, little, len);
		res2 = ft_strnstr(big, little, len);
		CuAssertPtrEquals(tc, res1, res2);
	}
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
	int		res1;
	int		res2;

	printf("\n########### FT_ATOI ###########\n");
	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	res1 = atoi(nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_atoi(nptr);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_atoi_negative(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "-123";
	int		res1;
	int		res2;

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	res1 = atoi(nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_atoi(nptr);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_atoi_positive(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "+123";
	int		res1;
	int		res2;

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	res1 = atoi(nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_atoi(nptr);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_atoi_multiple_signs(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "+++---+123";
	int		res1;
	int		res2;

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	res1 = atoi(nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_atoi(nptr);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_atoi_whitespaces_1(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = " \t\t\n -123";
	int		res1;
	int		res2;

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	res1 = atoi(nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_atoi(nptr);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_atoi_whitespaces_2(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "- \t123";
	int		res1;
	int		res2;

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	res1 = atoi(nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_atoi(nptr);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_atoi_whitespaces_3(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "-12\t453";
	int		res1;
	int		res2;

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	res1 = atoi(nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_atoi(nptr);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_atoi_int_min(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "-2147483648";
	int		res1;
	int		res2;

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	res1 = atoi(nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_atoi(nptr);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_atoi_int_max(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "2147483647";
	int		res1;
	int		res2;

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	res1 = atoi(nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_atoi(nptr);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_atoi_too_big_int(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "21474836478";
	int		res1;
	int		res2;

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	res1 = atoi(nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_atoi(nptr);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_atoi_uint(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "4294967293";
	int		res1;
	int		res2;

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	res1 = atoi(nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_atoi(nptr);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_atoi_empty(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	nptr[] = "";
	int		res1;
	int		res2;

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	res1 = atoi(nptr);
	SANDBOX(ft_atoi(nptr););
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res2 = ft_atoi(nptr);
	CuAssertIntEquals(tc, res1, res2);
}

void	test_ft_atoi_null(CuTest *tc)
{
	int		(*ft_atoi)(const char *) = get_fun("ft_atoi");
	char	*nptr = NULL;
	int		res1;
	int		res2;
	int		exit1;
	int		exit2;

	sprintf(buff.txt, "%s: nptr=%s\n", __func__, nptr);
	SANDBOX(res1 = atoi(nptr););
	exit1 = g_exit_code;
	SANDBOX(ft_atoi(nptr););
	exit2 = g_exit_code;
	CuAssert(tc, "ft_atoi doesn't crash when it should.", !(WIFSIGNALED(exit1)
															&& !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_atoi crash when it shouldn't.", !(!WIFSIGNALED(exit1)
													   && WIFSIGNALED(exit2)));
	if (!WIFSIGNALED(exit1) && !WIFSIGNALED(exit2))
	{
		res1 = atoi(nptr);
		res2 = ft_atoi(nptr);
		CuAssertIntEquals(tc, res1, res2);
	}
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
	size_t	malloc_size;

	nmemb = 5;
	size = sizeof(int);
	sprintf(buff.txt, "%s: nmemb=%lu, size=%lu\n", __func__, nmemb, size);
	SANDBOX(
		ptr = (int *)ft_calloc(nmemb, size);
		free(ptr);
		);
	CuAssert(tc, "ft_calloc fails with basic nmemb & size.", !WIFSIGNALED(g_exit_code));
	ptr = (int *)ft_calloc(nmemb, size);
	malloc_size = g_last_malloc_size;
	CuAssert(tc, "ft_calloc doesn't allocate the correct size.",
			 malloc_size == size * nmemb);
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
	char	*res1;
	char	*res2;
	size_t	size;

	printf("\n########### FT_STRDUP ##########\n");
	sprintf(buff.txt, "%s: s = <%s>\n", __func__, s);
	SANDBOX(res2 = ft_strdup(s);free(res2));
	CuAssert(tc, "ft_strdup crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res1 = strdup(s);
	res2 = ft_strdup(s);
	size = g_last_malloc_size;
	CuAssertStrEquals(tc, res1, res2);
	CuAssertIntEquals_Msg(tc, "Incorrect malloc size", 27, size);
	if (res1)
		free(res1);
	if (res2)
		free(res2);
}

void	test_ft_strdup_malloc_fail(CuTest *tc)
{
	char	*(*ft_strdup)(const char *) = get_fun("ft_strdup");
	char	s[] = "TRIple Mooonstre!!! COUCOU";
	char	*res1;
	char	*res2;

	sprintf(buff.txt, "%s: s = <%s>\n", __func__, s);
	SANDBOX(
		FAIL_MALLOC;
		res2 = ft_strdup(s);
		END_FAIL;
		if(res2)
			free(res2)
		);
	CuAssert(tc, "ft_strdup crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	FAIL_MALLOC;
	res1 = strdup(s);
	res2 = ft_strdup(s);
	END_FAIL;
	CuAssertPtrEquals(tc, res1, res2);
	if (res1)
		free(res1);
	if (res2)
		free(res2);
}

void	test_ft_strdup_empty_s(CuTest *tc)
{
	char	*(*ft_strdup)(const char *) = get_fun("ft_strdup");
	char	s[] = "";
	char	*res1;
	char	*res2;
	size_t	size;

	sprintf(buff.txt, "%s: s = <%s>\n", __func__, s);
	SANDBOX(
		res2 = ft_strdup(s);
		if (res2)
			free(res2);
		);
	CuAssert(tc, "ft_strdup crash when it shouldn't.", !WIFSIGNALED(g_exit_code));
	res1 = strdup(s);
	res2 = ft_strdup(s);
	size = g_last_malloc_size;
	CuAssertStrEquals(tc, res1, res2);
	CuAssertIntEquals_Msg(tc, "Incorrect malloc size", 1, size);
	if (res1)
		free(res1);
	if (res2)
		free(res2);
}

void	test_ft_strdup_null_s(CuTest *tc)
{
	char	*(*ft_strdup)(const char *) = get_fun("ft_strdup");
	char	*s = NULL;
	char	*res1;
	char	*res2;
	int		exit1;
	int		exit2;

	sprintf(buff.txt, "%s: s = <%s>\n", __func__, s);
	SANDBOX(
		res1 = strdup(s);
		if (res1)
			free(res1);
		);
	exit1 = g_exit_code;
	SANDBOX(
		res2 = ft_strdup(s);
		if (res2)
			free(res2);
		);
	exit2 = g_exit_code;
	CuAssert(tc, "ft_strdup doesn't crash when it should.", !(WIFSIGNALED(exit1)
															  && !WIFSIGNALED(exit2)));
	CuAssert(tc, "ft_strdup crash when it shouldn't.", !(!WIFSIGNALED(exit1)
														 && WIFSIGNALED(exit2)));
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
	/* CuAssertIntEquals_Msg(tc, "Bad allocation size.", 12, g_last_malloc_size); */
	/* CuAssertStrEquals(tc, " everyone !", res); */
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
	/* CuAssertIntEquals_Msg(tc, "Bad allocation size.", 6, g_last_malloc_size); */
	/* CuAssertStrEquals(tc, "Hello", res); */
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
	char	*(*ft_strtrim)(const char *s1, const char *set) = get_fun("ft_strtrim");
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
	char	*(*ft_strtrim)(const char *s1, const char *set) = get_fun("ft_strtrim");
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
	char	*(*ft_strtrim)(const char *s1, const char *set) = get_fun("ft_strtrim");
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
	char	*(*ft_strtrim)(const char *s1, const char *set) = get_fun("ft_strtrim");
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
	char	*(*ft_strtrim)(const char *s1, const char *set) = get_fun("ft_strtrim");
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
	char	*(*ft_strtrim)(const char *s1, const char *set) = get_fun("ft_strtrim");
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
	char	*(*ft_strtrim)(const char *s1, const char *set) = get_fun("ft_strtrim");
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
	char	*(*ft_strtrim)(const char *s1, const char *set) = get_fun("ft_strtrim");
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
	char	*(*ft_strtrim)(const char *s1, const char *set) = get_fun("ft_strtrim");
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
	char	*(*ft_strtrim)(const char *s1, const char *set) = get_fun("ft_strtrim");
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
	char	*(*ft_strtrim)(const char *s1, const char *set) = get_fun("ft_strtrim");
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
	char	*(*ft_strtrim)(const char *s1, const char *set) = get_fun("ft_strtrim");
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
	res = ft_split(s, c);
	CuAssertPtrNotNullMsg(tc, "ft_split returns NULL with basic inputs.", res);
	for (i = 0; res[i] && i < 6; ++i)
	{
		CuAssertStrEquals(tc, expected[i], res[i]);
		free(res[i]);
		res[i] = NULL;
	}
	CuAssert(tc, "Bad number of strings.", res[i] == NULL);
	free(res);
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
	res = ft_split(s, c);
	CuAssertPtrNotNullMsg(tc, "ft_split returns NULL with basic inputs.", res);
	for (i = 0; res[i] && i < 6; ++i)
	{
		CuAssertStrEquals(tc, expected[i], res[i]);
		free(res[i]);
		res[i] = NULL;
	}
	CuAssert(tc, "Bad number of strings.", res[i] == NULL);
	free(res);
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
	res = ft_split(s, c);
	CuAssertPtrNotNullMsg(tc, "ft_split returns NULL when c not in s.", res);
	for (i = 0; res[i] && i < 2; ++i)
	{
		CuAssertStrEquals(tc, expected[i], res[i]);
		free(res[i]);
		res[i] = NULL;
	}
	CuAssert(tc, "Bad number of strings.", res[i] == NULL);
	free(res);
}

void	test_ft_split_zero_c(CuTest *tc)
{
	char	**(*ft_split)(char const *, char) = get_fun("ft_split");
	char	s[] = "hello monstre! How are you?";
	char	c = '\0';
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
	CuAssert(tc, "FT_SPLIT CRASH WHEN C = \\0", !WIFSIGNALED(g_exit_code));
	res = ft_split(s, c);
	CuAssertPtrNotNullMsg(tc, "ft_split returns NULL when c = \\0.", res);
	for (i = 0; res[i] && i < 2; ++i)
	{
		CuAssertStrEquals(tc, expected[i], res[i]);
		free(res[i]);
		res[i] = NULL;
	}
	CuAssert(tc, "Bad number of strings.", res[i] == NULL);
	free(res);
}

void	test_ft_split_empty_s(CuTest *tc)
{
	char	**(*ft_split)(char const *, char) = get_fun("ft_split");
	char	s[] = "";
	char	c = 'e';
	char	**res;
	char	*expected[] = {"", NULL};
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
	res = ft_split(s, c);
	CuAssertPtrNotNullMsg(tc, "ft_split returns NULL with empty s.", res);
	for (i = 0; res[i] && i < 2; ++i)
	{
		CuAssertStrEquals(tc, expected[i], res[i]);
		free(res[i]);
		res[i] = NULL;
	}
	CuAssert(tc, "Bad number of strings.", res[i] == NULL);
	free(res);
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
	CuAssert(tc, "FT_SPLIT CRASH WHEN FIRST MALLOC FAILS", !WIFSIGNALED(g_exit_code));
	FAIL_MALLOC;
	res = ft_split(s, c);
	END_FAIL;
	CuAssertPtrEquals_Msg(tc, "ft_split doesn't return NULL when first alloc fails.", NULL, res);
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
	g_malloc_fail = 3;
	res = ft_split(s, c);
	END_FAIL;
	CuAssertPtrEquals_Msg(tc, "ft_split doesn't return NULL when third alloc fails.", NULL, res);
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
	res = ft_split(s, c);
	CuAssertPtrEquals_Msg(tc, "ft_split doesn't return NULL when s is set to NULL.", NULL, res);
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
	g_last_malloc_size = 0;
	ft_striteri(s, rot_47_2);
	CuAssertIntEquals_Msg(tc, "ft_striteri is not calling the function.", strlen(s), g_in_fun);
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
		for (i = 0; i < g_n_tests_fun; i++)
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
		for (i = 0; i < g_n_tests_fun; i++)
			if (fcts[i].fun_name && !fcts[i].fun)
				printf("%sMISSING %s.%s\n", ANSI_COLOR_RED, fcts[i].fun_name, ANSI_COLOR_RESET);
}

int	main(int argc, char *argv[])
{
	char	*fun_name = NULL;
	void	*lib;
	void	*test_fun;

	g_n_tests_fun = 31;
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

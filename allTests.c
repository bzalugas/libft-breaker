/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allTests.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:12:12 by bazaluga          #+#    #+#             */
/*   Updated: 2023/09/06 17:50:25 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lftest.h"

/****************************/
/*        FT_ISALPHA        */
/****************************/

void	test_ft_isalpha_basic(CuTest *tc)
{
	char	c;

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

void	TestNormalFtIsprint(CuTest *tc)
{
	char	c;

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
	SUITE_ADD_TEST(suite, TestNormalFtIsprint);
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

int	secure_strlen(char *s, size_t (*func)(const char *), size_t *res)
{
	pid_t	pid;
	int		status;


	pid = fork();
	if (pid == -1)
	{
		perror("Error during a fork");
		exit(1);
	}
	if (pid == 0)
	{
		*res = func(s);
		exit(0);
	}
	else
	{
		wait(&status);
		return (status);
	}
}

void	test_ft_strlen_basic(CuTest *tc)
{
	char	*s;

	s = strdup("Bonjour a tous !");
	printf("ft_strlen1: input <%s>\n", s);
	CuAssertIntEquals(tc, strlen(s), ft_strlen(s));
}

void	test_ft_strlen_null(CuTest *tc)
{
	char		*s;
	size_t		res1;
	size_t		res2;
	int			return1;
	int			return2;

	s = NULL;
	printf("ft_strlen2: input <%s>\n", s);
	return1 = secure_strlen(s, strlen, &res1);
	return2 = secure_strlen(s, ft_strlen, &res2);
	CuAssertIntEquals_Msg(tc, "Exit status different", return1, return2);
	if (!(WIFSIGNALED(return1) && WIFSIGNALED(return2)))
		CuAssertIntEquals(tc, res1, res2);
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

int		secureMemset(void *s, int c, size_t n, void *(*fun)(void *, int, size_t), unsigned long int *res)
{
	int	pid;
	int	status;
	int	fd[2];
	int	fd2[2];

	if (pipe(fd) < 0)
	{
		perror("Error during pipe.");
		exit(1);
	}
	if (pipe(fd2) < 0)
	{
		perror("Error during pipe.");
		exit(1);
	}
	if ((pid = fork()) == -1)
	{
		perror("Error during fork");
		exit(1);
	}
	if (pid == 0)
	{
		close(fd[0]);
		close(fd2[0]);
		*res = (unsigned long)fun(s, c, n);
		write(fd[1], res, sizeof(*res));
		close(fd[1]);
		write(fd2[1], (char*)*res, n);
		close(fd2[1]);
		exit(0);
	}
	close(fd[1]);
	close(fd2[1]);
	wait(&status);
	read(fd[0], res, sizeof(*res));
	close(fd[0]);
	read(fd2[0], s, n);
	close(fd2[0]);
	return (status);
}

void	test_ft_memset_basic(CuTest *tc)
{
	size_t	size = 23;
	char	b1[BUFFSIZE];
	char	b2[BUFFSIZE];
	unsigned long	res1;
	unsigned long	res2;
	int		st1;
	int		st2;

	memset(b1, 'b', BUFFSIZE);
	memset(b2, 'b', BUFFSIZE);
	printf("ft_memset1: s = %s, c = %d, n = %lu\n", b2, 'A', size);
	st1 = secureMemset(b1, 'A', size, &memset, &res1);
	st2 = secureMemset(b2, 'A', size, &ft_memset, &res2);
	CuAssert(tc, "ft_memset segfault when it souldn't.", !(WIFSIGNALED(st2) && !WIFSIGNALED(st1) && WCOREDUMP(st2)));
	CuAssert(tc, "memset segfault but ft_memset doesn't.", !(WIFSIGNALED(st1) && !WIFSIGNALED(st2) && WCOREDUMP(st1)));
	CuAssertIntEquals_Msg(tc, "Different process ending", st1, st2);
	if (!WIFSIGNALED(st1) && !WIFSIGNALED(st2))
	{
		CuAssert(tc, "Bad return of ft_memset", (unsigned long)b2 == res2);
		CuAssertStrEquals_Msg(tc, "Results differents", b1, b2);
	}
}

void	test_ft_memset_cut_string(CuTest *tc)
{
	size_t	size = 23;
	char	b1[BUFFSIZE];
	char	b2[BUFFSIZE];
	unsigned long	res1;
	unsigned long	res2;
	int		st1;
	int		st2;

	memset(b1, 'b', BUFFSIZE);
	memset(b2, 'b', BUFFSIZE);
	b1[5] = '\0';
	b2[5] = '\0';
	printf("ft_memset2: s = %s, c = %d, n = %lu\n", b2, 'A', size);
	st1 = secureMemset(b1, 'A', size, memset, &res1);
	st2 = secureMemset(b2, 'A', size, ft_memset, &res2);
	CuAssert(tc, "ft_memset segfault when it souldn't.", !(WIFSIGNALED(st2) && !WIFSIGNALED(st1) && WCOREDUMP(st2)));
	CuAssert(tc, "memset segfault but ft_memset doesn't.", !(WIFSIGNALED(st1) && !WIFSIGNALED(st2) && WCOREDUMP(st1)));
	CuAssertIntEquals_Msg(tc, "Different process ending", st1, st2);
	if (!WIFSIGNALED(st1) && !WIFSIGNALED(st2))
	{
		CuAssert(tc, "Bad return of ft_memset", (unsigned long)b2 == res2);
		/* CuAssertStrEquals_Msg(tc, "Results differents", b1, b2); */
		size_t i = 0;
		while (++i < size)
			write(1, &b1[i - 1], 1);
		write(1, "\n", 1);
		i = 0;
		while (++i < size)
			write(1, &b2[i - 1], 1);
		write(1, "\n", 1);
		CuAssert(tc, "ft_memset doesn't work if string is cut", !memcmp(b1, b2, size));

	}
}

void	test_ft_memset_not_char(CuTest *tc)
{
	size_t	size = 23;
	char	b1[BUFFSIZE];
	char	b2[BUFFSIZE];
	unsigned long	res1;
	unsigned long	res2;
	int		st1;
	int		st2;

	memset(b1, 'b', BUFFSIZE);
	memset(b2, 'b', BUFFSIZE);
	printf("ft_memset1: s = %s, c = %d, n = %lu\n", b2, '\200', size);
	st1 = secureMemset(b1, '\200', size, memset, &res1);
	st2 = secureMemset(b2, '\200', size, ft_memset, &res2);
	CuAssert(tc, "ft_memset segfault when it souldn't.", !(WIFSIGNALED(st2) && !WIFSIGNALED(st1) && WCOREDUMP(st2)));
	CuAssert(tc, "memset segfault but ft_memset doesn't.", !(WIFSIGNALED(st1) && !WIFSIGNALED(st2) && WCOREDUMP(st1)));
	CuAssertIntEquals_Msg(tc, "Different process ending", st1, st2);
	if (!WIFSIGNALED(st1) && !WIFSIGNALED(st2))
	{
		CuAssert(tc, "Bad return of ft_memset", (unsigned long)b2 == res2);
		CuAssertStrEquals_Msg(tc, "ft_memset doesn't cast to unsigned char", b1, b2);
	}
}

CuSuite	*ft_memset_get_suite()
{
	CuSuite	*suite = CuSuiteNew();
	SUITE_ADD_TEST(suite, test_ft_memset_basic);
	SUITE_ADD_TEST(suite, test_ft_memset_cut_string);
	SUITE_ADD_TEST(suite, test_ft_memset_not_char);
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

/****************************/
/*        FT_MEMCPY         */
/****************************/

/****************************/
/*        FT_MEMMOVE        */
/****************************/

int	main(void)
{
	printf("\n\n");
	run_test_ft_isalpha();
	run_test_ft_isdigit();
	run_test_ft_isalnum();
	run_test_ft_isascii();
	run_test_ft_isprint();
	run_test_ft_strlen();
	run_test_ft_memset();
	return (0);
}

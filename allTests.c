/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allTests.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:12:12 by bazaluga          #+#    #+#             */
/*   Updated: 2023/09/06 15:03:31 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lftest.h"

/****************************/
/*        FT_ISALPHA        */
/****************************/

void	TestNormalFtIsalpha(CuTest *tc)
{
	char	c;

	printf("ft_isalpha: Normal inputs (-128 => 127)\n");
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
	SUITE_ADD_TEST(suite, TestNormalFtIsalpha);
	return (suite);
}

void	RunFtIsalpha(void)
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

void	TestNormalFtIsdigit(CuTest *tc)
{
	char	c;

	printf("ft_isdigit: Normal inputs (-128 => 127)\n");
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
	SUITE_ADD_TEST(suite, TestNormalFtIsdigit);
	return (suite);
}

void	RunFtIsdigit(void)
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

void	TestNormalFtIsalnum(CuTest *tc)
{
	char	c;

	printf("ft_isalnum: Normal inputs (-128 => 127)\n");
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
	SUITE_ADD_TEST(suite, TestNormalFtIsalnum);
	return (suite);
}

void	RunFtIsalnum(void)
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

void	TestNormalFtIsascii(CuTest *tc)
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
	SUITE_ADD_TEST(suite, TestNormalFtIsascii);
	return (suite);
}

void	RunFtIsascii(void)
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

void	RunFtIsprint(void)
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

void	TestNormalFtStrlen(CuTest *tc)
{
	char	*s;

	s = strdup("Bonjour a tous !");
	printf("ft_strlen1: input <%s>\n", s);
	CuAssertIntEquals(tc, strlen(s), ft_strlen(s));
}

void	TestNullFtStrlen(CuTest *tc)
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
	SUITE_ADD_TEST(suite, TestNormalFtStrlen);
	SUITE_ADD_TEST(suite, TestNullFtStrlen);
	return (suite);
}

void	RunFtStrlen(void)
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

	if (pipe(fd) == -1)
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
		*res = (unsigned long)fun(s, c, n);
		write(fd[1], res, sizeof(*res));
		close(fd[1]);
		exit(0);
	}
	close(fd[1]);
	wait(&status);
	read(fd[0], res, sizeof(*res));
	close(fd[0]);
	return (status);
}

void	TestNormalMemset(CuTest *tc)
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
	st1 = secureMemset(b1, 'A', size, memset, &res1);
	st2 = secureMemset(b2, 'A', size, ft_memset, &res2);
	CuAssertIntEquals_Msg(tc, "Different process ending", st1, st2);
	if (st1 != st2)
	{
		if (WIFSIGNALED(st2) && !WIFSIGNALED(st1) && WCOREDUMP(st2))
			printf("ft_memset segfault when it souldn't.\n");
		if (WIFSIGNALED(st1) && !WIFSIGNALED(st2) && WCOREDUMP(st1))
			printf("memset segfault but ft_memset don't.\n");
	}
	else if (!WIFSIGNALED(st1) && !WIFSIGNALED(st2))
	{
		CuAssert(tc, "Bad return of ft_memset", (unsigned long)b2 == res2);
		CuAssert(tc, "Results differents", !memcmp((void*)res1, (void*)res2, BUFFSIZE));
	}
}

CuSuite	*ft_memset_get_suite()
{
	CuSuite	*suite = CuSuiteNew();
	SUITE_ADD_TEST(suite, TestNormalMemset);
	return (suite);
}

void	RunFtMemset(void)
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
	RunFtIsalpha();
	RunFtIsdigit();
	RunFtIsalnum();
	RunFtIsascii();
	RunFtIsprint();
	RunFtStrlen();
	RunFtMemset();
	return (0);
}

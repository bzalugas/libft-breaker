/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allTests.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:12:12 by bazaluga          #+#    #+#             */
/*   Updated: 2023/09/06 01:22:23 by bazaluga         ###   ########.fr       */
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
		*res = 5;
		*res = func(s);
		return (0);
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
	RunFtIsalpha();
	RunFtIsdigit();
	RunFtIsalnum();
	RunFtIsascii();
	RunFtIsprint();
	RunFtStrlen();
	return (0);
}

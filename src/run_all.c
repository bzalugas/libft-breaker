/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_all.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:16:18 by bazaluga          #+#    #+#             */
/*   Updated: 2024/05/16 18:13:43 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lftest.h"

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
			printf("%s%c%s", GREEN, output->buffer[i], WHITE);
		else if (output->buffer[i] == 'U')
			printf("%s%c%s", UB, output->buffer[i], WHITE);
		else
			printf("%s%c%s", RED, output->buffer[i], WHITE);
	}
	if (!strncmp(&output->buffer[i], "\n\nOK", 3))
		printf("%s%s%s", GREEN, &output->buffer[i], WHITE);
	else
		printf("%s\n", &output->buffer[i]);
	if (!particular_fun)
		for (i = 0; i < N_TESTS_FUN; i++)
			if (fcts[i].fun_name && !fcts[i].fun)
				printf("%sMISSING %s.%s\n", RED, fcts[i].fun_name, COLOR_RESET);
	if (suite->ubCount > 0)
		printf("%sIf you have %s\"undefined behavior cases\"%s, the input is \
outside the official contract. Non-crashing behavior is accepted; these entries \
show cases that still crashed or diverged when both calls returned.%s\n", WHITE,
			UB, WHITE, COLOR_RESET);
	CuStringDelete(output);
	CuSuiteDelete(suite);
}

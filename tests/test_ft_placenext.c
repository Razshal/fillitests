/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_placenext.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 18:39:59 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/27 17:37:38 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillitests.h"

void	tester(char *block, char **grid, int limit, char letter)
{
	if (ft_placenext(block, grid, limit, letter))
		PRINTFSUCCESS;
	else
		PRINTFFAILURE;
	ft_print_split(grid);
}

void	test_ft_placenext(void)
{
	PRINTNAME("test placenext");
	char **grid = ft_tabcreator(10);

	tester("ddd", grid, 5, 'A');
	tester("rrr", grid, 5, 'B');
	tester("rdl", grid, 5, 'C');
	tester("rdl", grid, 5, 'D');
	tester("rrr", grid, 5, 'E');
	tester("ddd", grid, 5, 'F');
	tester("ddd", grid, 5, 'G');
}

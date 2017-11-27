/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_placeblock.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 12:13:31 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/27 13:12:52 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillitests.h"

static void tester(char *block, char **grid, int line, int row, char letter)
{
	if (ft_placeblock(block, grid, line, row) && ft_alphablock(grid, letter))
		PRINTFSUCCESS;
	else
		PRINTFFAILURE;
	ft_print_split(grid);
}

void test_ft_placeblock(void)
{
	PRINTNAME("test basique de placement de bloc");

	char **grid = ft_strsplit(".......... .......... .......... .......... .......... .......... .......... .......... .......... ..........", ' ');

	tester("drbd", grid, 0, 0, 'A');
	tester("rrr", grid, 0, 1, 'B');
	tester("rrr", grid, 2, 1, 'C');
}


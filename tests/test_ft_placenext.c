/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_placenext.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 18:39:59 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/26 20:21:51 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillitests.h"

int *nextpos(char **grid, int limit);

static void	tester(char **grid, char *block, int limit)
{
	int *array = nextpos(grid, limit);

	if (ft_placeblock(block, grid, array[0], array[1]) && ft_alphablock(grid, 'A'))
		PRINTFSUCCESS;
	else
		PRINTFFAILURE;
	ft_print_split(grid);

}

void	test_ft_placenext(void)
{
	PRINTNAME("test placenext");

	char **grid = ft_strsplit("..... ..... ..... ..... .....", ' ');

	tester(grid, "rrr", 5);
	tester(grid, "rrr", 5);
}

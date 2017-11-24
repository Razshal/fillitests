/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_placenext.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 18:39:59 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/24 19:00:20 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillitests.h"

int *nextpos(char **grid, int max);

void	test_ft_placenext(void)
{
	PRINTNAME("test placenext");
	char **grid = ft_strsplit(".......... .......... .......... .......... .......... .......... .......... .......... .......... ..........", ' ');
	int *array = nextpos(grid, 10);
	if (ft_placeblock("rrr", grid, array[0], array[1]) && ft_alphablock(grid, 'A'))
		PRINTFSUCCESS;
	else
		PRINTFFAILURE;
	ft_print_split(grid);

	int *array2 = nextpos(grid, 10);
	if (ft_placeblock("rdl", grid, array2[0], array2[1]) && ft_alphablock(grid, 'B'))
		PRINTFSUCCESS;
	else
		PRINTFFAILURE;
	ft_print_split(grid);
}

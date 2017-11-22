/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_placeblock.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 12:13:31 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/22 16:55:25 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillitests.h"

void test_ft_placeblock(void)
{
	PRINTNAME("test basique de placement de bloc");

	char **grid = ft_strsplit(".......... .......... .......... .......... .......... .......... .......... .......... .......... ..........", ' ');

	if (ft_placeblock("dlbd", grid, 2, 1) && ft_alphablock(grid, 'A')
			&& ft_placeblock("drbd", grid, 0, 0) && ft_alphablock(grid, 'B')
			&& ft_placeblock("rrr", grid, 1, 0) && ft_alphablock(grid, 'C')
		)
		PRINTFSUCCESS;
	else
		PRINTFFAILURE;
	ft_print_split(grid);
}

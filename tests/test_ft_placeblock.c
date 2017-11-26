/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_placeblock.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 12:13:31 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/26 11:28:37 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillitests.h"

void test_ft_placeblock(void)
{
	PRINTNAME("test basique de placement de bloc");

	char **grid = ft_strsplit(".......... .......... .......... .......... .......... .......... .......... .......... .......... ..........", ' ');

	if (ft_placeblock("dlbd", grid, 1, 1) && ft_alphablock(grid, 'A')
			&& ft_placeblock("drbd", grid, 1, 2) && ft_alphablock(grid, 'B')
			&& ft_placeblock("rrr", grid, 0, 0) && ft_alphablock(grid, 'C')
		)
		PRINTFSUCCESS;
	else
		PRINTFFAILURE;
	ft_print_split(grid);
}
/*
void test_ft_placeblock2(t_list *list)
{
	int cline = 0;
	int crow = 0;
	int count = 0;
	char ch = 'A';
	char **grid = ft_strsplit(".......... .......... .......... .......... .......... .......... .......... .......... .......... ..........", ' ');

	while (list)
	{
		if (ft_placeblock(list->content, grid, cline, crow) && ft_alphablock(grid, ch))
		{
			list = list->next;
			count++;
		}
		else

	}
}*/

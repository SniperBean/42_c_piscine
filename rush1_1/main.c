/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 13:48:31 by sxu               #+#    #+#             */
/*   Updated: 2018/11/04 19:40:53 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int ag, char **av)
{
	int **grid;

	if (ag == 10 && verify_length(av) == 1)
	{
		if (verify_word(av) == 1)
		{
			grid = input_to_grid(av);
			if (verify_row(grid) == 1 && verify_col(grid) == 1 &&
				verify_block(grid, 0, 0, 0) == 1)
				backtrace(0, grid, 0);
			else
				ft_putstr("Error\n");
		}
		else
			ft_putstr("Error\n");
	}
	else
	{
		ft_putstr("Error\n");
	}
}

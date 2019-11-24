/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 13:10:50 by sxu               #+#    #+#             */
/*   Updated: 2018/11/04 13:54:23 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

int	**ctoi(char **grid,int **grid_i)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (grid[i + 1][j] == '.')
				grid_i[i][j] = 0;
			else
				grid_i[i][j] = grid[i + 1][j] - '0';
			j++;
		}
		i++;
	}
	return (grid_i);
}

int	**input_to_grid(char **grid)
{
	int **grid_i;
	int *data;
	int i;

	i = 0;
	grid_i = (int**)malloc(sizeof(int) * 9 + 1);
	data = (int*)malloc(sizeof(int) * 9 * 9 + 1);
	while (i < 9)
	{
		grid_i[i] = data;
		data += 9;
		i++;
	}
	grid_i = ctoi(grid, grid_i);
	return (grid_i);
}

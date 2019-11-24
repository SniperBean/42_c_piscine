/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrace.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 15:44:37 by sxu               #+#    #+#             */
/*   Updated: 2018/11/04 19:24:28 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		check_row(int row, int col, int **grid)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grid[row][i] == grid[row][col] && i != col)
			return (0);
		i++;
	}
	return (1);
}

int		check_col(int row, int col, int **grid)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grid[i][col] == grid[row][col] && i != row)
			return (0);
		i++;
	}
	return (1);
}

int		check_block(int row, int col, int **grid)
{
	int temp_row;
	int temp_col;
	int i;
	int j;

	temp_row = row / 3 * 3;
	temp_col = col / 3 * 3;
	i = temp_row;
	while (i < temp_row + 3)
	{
		j = temp_col;
		while (j < temp_col + 3)
		{
			if (grid[i][j] == grid[row][col] && i != row && j != col)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		is_place(int count, int **grid)
{
	int row;
	int col;

	row = count / 9;
	col = count % 9;
	if (check_row(row, col, grid) == 0)
		return (0);
	if (check_col(row, col, grid) == 0)
		return (0);
	if (check_block(row, col, grid) == 0)
		return (0);
	return (1);
}

void	backtrace(int count, int **grid, int i)
{
	int row;
	int col;

	row = count / 9;
	col = count % 9;
	if (count == 81)
	{
		ft_putsudoku(grid);
		return ;
	}
	if (grid[row][col] == 0)
	{
		i = 1;
		while (i <= 9)
		{
			grid[row][col] = i;
			if (is_place(count, grid))
				backtrace(count + 1, grid, 0);
			i++;
		}
		grid[row][col] = 0;
	}
	else
		backtrace(count + 1, grid, 0);
	return ;
}

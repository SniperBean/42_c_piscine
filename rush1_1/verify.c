/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 14:05:09 by sxu               #+#    #+#             */
/*   Updated: 2018/11/04 19:17:39 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	verify_length(char **grid)
{
	int count;
	int i;
	int j;

	count = 0;
	i = 1;
	while (grid[i] != '\0')
	{
		j = 0;
		while (grid[i][j] != '\0')
		{
			count++;
			j++;
		}
		i++;
	}
	if (count == 81)
		return (1);
	else
		return (0);
}

int	verify_word(char **grid)
{
	int i;
	int j;

	i = 1;
	while (grid[i] != '\0')
	{
		j = 0;
		while (grid[i][j] != '\0')
		{
			if ((grid[i][j] < '0' || grid[i][j] > '9') && grid[i][j] != '.')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	verify_row(int **grid)
{
	int i;
	int j;
	int k;
	int temp;

	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 8)
		{
			if (grid[i][j] > 0)
			{
				k = j + 1;
				temp = grid[i][j];
				while (k < 9)
				{
					if (temp == grid[i][k])
						return (0);
					k++;
				}
			}
		}
	}
	return (1);
}

int	verify_col(int **grid)
{
	int i;
	int j;
	int k;
	int temp;

	i = -1;
	while (++i < 8)
	{
		j = -1;
		while (++j < 9)
		{
			if (grid[i][j] > 0)
			{
				k = i + 1;
				temp = grid[i][j];
				while (k < 9)
				{
					if (temp == grid[k][j])
						return (0);
					k++;
				}
			}
		}
	}
	return (1);
}

int	verify_block(int **grid, int i, int j, int k)
{
	int l;
	int temp;

	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			k = -1;
			while (++k < 8)
			{
				if (grid[i + k / 3][j + k % 3] > 0)
				{
					l = k;
					temp = grid[i + k / 3][j + k % 3];
					while (++l < 9)
						if (temp == grid[i + l / 3][j + l % 3])
							return (0);
				}
			}
			j += 3;
		}
		i += 3;
	}
	return (1);
}

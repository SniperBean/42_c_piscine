/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <mirivera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 15:43:26 by sxu               #+#    #+#             */
/*   Updated: 2018/11/11 16:40:45 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_header.h"

void	rush01(int x, int y)
{
	int col;
	int row;

	row = -1;
	while (++row < y)
	{
		col = -1;
		while (++col < x)
		{
			if (row == y - 1 && x == 1 && y != 1)
				ft_putchar('\\');
			else if ((col == 0 && row == 0) ||
					((col == x - 1 && row == y - 1) && y != 1))
				ft_putchar('/');
			else if ((row == y - 1 && col == 0) || \
				(row == 0 && col == x - 1))
				ft_putchar('\\');
			else if ((col == 0) || (col == x - 1) || \
				(row == 0) || (row == y - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	rush02(int h, int v)
{
	int i;
	int j;

	i = 0;
	h--;
	v--;
	while (i <= v && v >= 0 && h >= 0)
	{
		j = 0;
		while (j <= h)
		{
			if (i == 0 && (j == 0 || j == h))
				ft_putchar('A');
			else if (((i == 0 || i == v) && (j > 0 && j < h)) ||
					((j == 0 || j == h) && (i > 0 && i < v)))
				ft_putchar('B');
			else if ((i != 0 && i == v) && (j == 0 || j == h))
				ft_putchar('C');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	rush03(int h, int v)
{
	int i;
	int j;

	i = 0;
	h--;
	v--;
	while (i <= v && v >= 0 && h >= 0)
	{
		j = 0;
		while (j <= h)
		{
			if ((i == 0 && j == 0) || (i == v && j == 0))
				ft_putchar('A');
			else if (((i == 0 || i == v) && (j > 0 && j < h)) ||
					((j == 0 || j == h) && (i > 0 && i < v)))
				ft_putchar('B');
			else if ((j != 0 && j == h && (i == v || i == 0)))
				ft_putchar('C');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	rush04(int x, int y)
{
	int col;
	int row;

	row = -1;
	while (++row < y)
	{
		col = -1;
		while (++col < x)
		{
			if (row == y - 1 && x == 1 && y != 1)
				ft_putchar('C');
			else if ((col == 0 && row == 0) ||
					((col == x - 1 && row == y - 1) && y != 1))
				ft_putchar('A');
			else if ((row == y - 1 && col == 0) || \
				(row == 0 && col == x - 1))
				ft_putchar('C');
			else if ((col == 0) || (col == x - 1) || \
				(row == 0) || (row == y - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 15:43:26 by sxu               #+#    #+#             */
/*   Updated: 2018/11/10 15:49:03 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush00(int h, int v)
{
	int i;
	int j;

	j = 0;
	while (i <= v && v >= 0 && h >= 0)
	{
		i = 0;
		while (i < h)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == v - 1) ||
				(i == h - 1 && j == 0) || (i == h - 1 && j == v - 1))
				ft_putchar('o');
			else if (i == 0 || i == h - 1)
				ft_putchar('|');
			else if (j == 0 || j == v - 1)
				ft_putchar('-');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
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

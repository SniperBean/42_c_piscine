/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 18:37:42 by sxu               #+#    #+#             */
/*   Updated: 2018/10/28 18:55:32 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int h, int v)
{
	int i;
	int j;

	i = 0;
	h--;
	v--;
	while (i <= v && v >= 0)
	{
		j = 0;
		while (j <= h && h >= 0)
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

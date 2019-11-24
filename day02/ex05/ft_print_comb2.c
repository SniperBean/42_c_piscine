/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 14:36:50 by sxu               #+#    #+#             */
/*   Updated: 2018/10/25 19:10:26 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(char first, char second, char third, char forth)
{
	ft_putchar(forth);
	ft_putchar(third);
	ft_putchar(' ');
	ft_putchar(second);
	ft_putchar(first);
}

void	ft_count_up(char first, char second, char third, char forth)
{
	while (!(third == '9' && forth == '9'))
	{
		ft_display(first, second, third, forth);
		first++;
		if (first > '9')
		{
			first = '0';
			second++;
			if (second > '9')
			{
				second = '0';
				third++;
				if (third > '9')
				{
					third = '0';
					forth++;
				}
			}
		}
		if (!(third == '9' && forth == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	char first;
	char second;
	char third;
	char forth;

	first = '0';
	second = '0';
	third = '0';
	forth = '0';
	ft_count_up(first, second, third, forth);
}

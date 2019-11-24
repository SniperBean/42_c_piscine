/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:57:05 by sxu               #+#    #+#             */
/*   Updated: 2018/10/25 09:18:03 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int result;

	result = 0;
	while (nb > 0)
	{
		if (nb > 9)
		{
			result += nb % 10;
			nb = nb / 10;
			result = result * 10;
		}
		else
		{
			result += nb;
			nb = 0;
		}
	}
	while (result > 0)
	{
		ft_putchar(result % 10 + 48);
		result = result / 10;
	}
}

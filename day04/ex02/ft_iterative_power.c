/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 15:58:14 by sxu               #+#    #+#             */
/*   Updated: 2018/10/27 13:15:54 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int check;

	check = nb;
	if (nb >= 0 && power == 0)
		return (1);
	if (nb < 0 || power <= 0)
		return (0);
	while (power > 1)
	{
		check *= nb;
		power--;
	}
	if (check <= 0)
		return (0);
	return (check);
}

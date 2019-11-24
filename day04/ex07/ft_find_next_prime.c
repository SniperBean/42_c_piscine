/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 18:58:34 by sxu               #+#    #+#             */
/*   Updated: 2018/10/27 23:10:21 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_prime(int nb)
{
	int i;
	int num;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = nb;
	num = 0;
	while (i >= 1)
	{
		if (nb % i == 0)
			num++;
		i--;
	}
	return (num == 2) ? (1) : (0);
}

int	ft_find_next_prime(int nb)
{
	int count;

	count = ft_find_prime(nb);
	while (count == 0 && nb < 2147483647)
	{
		nb++;
		count = ft_find_prime(nb);
	}
	return (nb);
}

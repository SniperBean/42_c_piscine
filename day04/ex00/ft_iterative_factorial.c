/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 15:09:23 by sxu               #+#    #+#             */
/*   Updated: 2018/10/27 14:58:41 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int check;

	if (nb >= 13)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0 || !(nb > 0))
		return (0);
	else
	{
		check = nb;
		while (nb > 1)
		{
			nb--;
			check *= nb;
		}
		if (check <= 0)
			return (0);
	}
	return (check);
}

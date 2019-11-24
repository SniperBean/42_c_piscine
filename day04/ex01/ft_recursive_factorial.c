/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 15:41:13 by sxu               #+#    #+#             */
/*   Updated: 2018/10/27 13:37:24 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int check;

	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0 || !(nb > 0) || nb >= 13)
		return (0);
	else
	{
		check = (nb * ft_recursive_factorial(nb - 1));
		if (check <= 0)
			return (0);
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

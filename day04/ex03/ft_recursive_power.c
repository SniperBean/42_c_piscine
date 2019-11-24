/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 09:30:03 by sxu               #+#    #+#             */
/*   Updated: 2018/10/27 15:24:19 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0 || power >= 13)
		return (0);
	return ((power == 0) ? 1 : (nb * ft_recursive_power(nb, power - 1)));
}

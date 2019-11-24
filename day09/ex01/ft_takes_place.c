/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 20:49:54 by sxu               #+#    #+#             */
/*   Updated: 2018/11/01 21:10:09 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_change_ampm(int hour)
{
	return ((hour >= 12 && hour < 24) ? "P.M." : "A.M.");
}

void	ft_takes_place(int hour)
{
	if (hour < 0 || hour > 23)
		return ;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 ", (hour % 12 == 0) ? 12 : (hour % 12));
	printf("%s AND ", ft_change_ampm(hour));
	hour++;
	printf("%d.00 ", (hour % 12 == 0) ? 12 : (hour % 12));
	printf("%s\n", ft_change_ampm(hour));
}

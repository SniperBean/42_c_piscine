/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 13:01:18 by sxu               #+#    #+#             */
/*   Updated: 2018/10/31 16:12:12 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_arange(int min, int max, int *array)
{
	int i;
	int mint;

	i = 0;
	mint = min;
	while (i < max - min)
	{
		array[i] = mint;
		i++;
		mint++;
	}
	return (array);
}

int	*ft_range(int min, int max)
{
	int *array;

	if (min >= max)
		return (0);
	array = (int*)malloc(sizeof(int*) * (max - min));
	array = ft_arange(min, max, array);
	return (array);
}

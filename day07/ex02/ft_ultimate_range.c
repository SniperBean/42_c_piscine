/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 14:54:39 by sxu               #+#    #+#             */
/*   Updated: 2018/10/31 18:18:27 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_arange(int min, int max, int **array)
{
	int i;
	int mint;

	i = 0;
	mint = min;
	while (i < max - min)
	{
		array[0][i] = mint;
		i++;
		mint++;
	}
	return (*array);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int*)malloc(sizeof(int*) * (max - min));
	*range = ft_arange(min, max, range);
	return (max - min);
}

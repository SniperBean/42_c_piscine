/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 11:55:12 by sxu               #+#    #+#             */
/*   Updated: 2018/11/05 15:33:27 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *map;
	int i;

	i = 0;
	map = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		map = (*f)(tab[i]);
		i++;
	}
	return (map);
}

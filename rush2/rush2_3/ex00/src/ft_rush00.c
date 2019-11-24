/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 16:31:30 by sxu               #+#    #+#             */
/*   Updated: 2018/11/11 16:39:22 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_header.h"

void	rush00(int x, int y)
{
	int axx;
	int axy;

	if (x < 1 || y < 1)
		return ;
	axy = y;
	while (axy != 0)
	{
		axx = x;
		while (axx != 0)
		{
			if (axy == y || axy == 1)
				putline(axx, x, 'o', '-');
			else
				putline(axx, x, '|', ' ');
			axx--;
		}
		ft_putchar('\n');
		axy--;
	}
}

void	putline(int axx, int x, char xa, char xb)
{
	if (axx == 1 || axx == x)
		ft_putchar(xa);
	else
		ft_putchar(xb);
}

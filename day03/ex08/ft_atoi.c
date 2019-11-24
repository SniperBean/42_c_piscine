/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:11:12 by sxu               #+#    #+#             */
/*   Updated: 2018/10/26 23:00:32 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int	ft_atoi(char *str)
{
	int res;
	int flag;

	res = 0;
	flag = 1;

	while (*str == ' ')
	{
		str++;
	}

	if(*str == '-')
	{
		flag = 0;
		str++;
	}
	else if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if (*str < '0' || *str > '9')
	{
		return (0);
	}
	while ((*str >= '0' && *str <= '9') && *str != '\0')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	if (flag == 0)
	{
		res = -res;
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 11:14:44 by sxu               #+#    #+#             */
/*   Updated: 2018/10/29 14:01:38 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_num(char *str, int res)
{
	while ((*str >= '0' && *str <= '9') && *str != '\0')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int res;
	int flag;

	res = 0;
	flag = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
	*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
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
		return (0);
	res = ft_check_num(str, res);
	if (flag == 0)
		res = -res;
	return (res);
}

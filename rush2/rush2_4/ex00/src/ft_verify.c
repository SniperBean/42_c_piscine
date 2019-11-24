/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <mirivera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:23:46 by sxu               #+#    #+#             */
/*   Updated: 2018/11/11 19:31:48 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../include/ft_header.h"

int		ft_verify_number(char *arg)
{
	int i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (arg[i] < '0' || arg[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int		ft_verify_char(char *arg)
{
	int i;
	int flag;

	i = 0;
	flag = 1;
	while (arg[i] != '\0')
	{
		if (arg[i] < '0' || arg[i] > '9')
			flag = 0;
		i++;
	}
	return (flag);
}

int		ft_check_all_function(char **func, char *arg)
{
	int flag;
	int i;
	int j;

	flag = 0;
	i = -1;
	while (++i < 5)
	{
		j = -1;
		while (arg[++j] != '\0')
		{
			if (func[i][j] == arg[j])
			{
				flag = 1;
				if (j == 9)
				{
					i = 5;
					break ;
				}
			}
			else
				flag = 0;
		}
	}
	return (1);
}

int		ft_verify_function_name(char *arg)
{
	int		i;
	char	**func;
	char	*data;

	func = (char**)malloc(sizeof(char*) * 5);
	data = (char*)malloc(sizeof(char) * 5 * 10);
	i = 0;
	while (i < 5)
	{
		*func = data + 10;
		func++;
		i++;
	}
	func[0] = "./colle-00";
	func[1] = "./colle-01";
	func[2] = "./colle-02";
	func[3] = "./colle-03";
	func[4] = "./colle-04";
	return (ft_check_all_function(func, arg));
}

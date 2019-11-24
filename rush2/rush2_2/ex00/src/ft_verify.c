/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:23:46 by sxu               #+#    #+#             */
/*   Updated: 2018/11/11 14:22:14 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_verify_number(char *arg)
{
	int i;
	
	i = 0;
	while (arg[i] != '\0')
	{
		if(arg[i] < '0' || arg[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

void	ft_allocate_memory(char **func, char *data)
{
	int i;

	func = (char**)malloc(sizeof(char*) * 5);
	data = (char*)malloc(sizeof(char) * 5 * 10);
	i = 0;
	while (i < 5)
	{
		*func = data + 10;
		func++;
		i++;
	}
	flag = 0;
	func[0] = "./colle-00";
	func[1] = "./colle-01";
	func[2] = "./colle-02";
	func[3] = "./colle-03";
	func[4] = "./colle-04";
}

int		ft_verify_function_name(char *arg)
{
	int i;
	int j;
	int flag;
	char **func;
	char *data;

	ft_allocate_memory(func, data);
	i = -1;
	while (++i < 5)
	{
		j = -1;
		while (arg[++j] != '\0')
		{
			if(func[i][j] == arg[j])
			{
				flag = 1;
				if(j == 9)
				{
					i = 5;
					break;
				}
			}
			else
				flag = 0;
		}
	}
	return (flag);
}

int main()
{
	char *str = "./colle-05";

	printf("%d", ft_verify_function_name(str));
}

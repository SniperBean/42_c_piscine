/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_result.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:51:35 by sxu               #+#    #+#             */
/*   Updated: 2018/11/11 16:39:05 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_header.h"
#include <stdlib.h>

void ft_select_function(char *filename, char *nbr1, char *nbr2)
{
	int i;
	int flag;
	char *func;

	func = (char*)malloc(sizeof(char) * 10);
	func = "./colle-0";	
	flag = 0;
	i = 0;
	while (func[i] != '\0')
	{
		if(func[i] == filename[i])
			flag = 1;
		i++;
	}
	if(filename[i] == '0' && filename[i+1] == '\0')
		rush00(ft_atoi(nbr1), ft_atoi(nbr2));
	if(filename[i] == '1' && filename[i+1] == '\0')
		rush01(ft_atoi(nbr1), ft_atoi(nbr2));
	if(filename[i] == '2' && filename[i+1] == '\0')
		rush02(ft_atoi(nbr1), ft_atoi(nbr2));
	if(filename[i] == '3' && filename[i+1] == '\0')
		rush03(ft_atoi(nbr1), ft_atoi(nbr2));
	if(filename[i] == '4' && filename[i+1] == '\0')
		rush04(ft_atoi(nbr1), ft_atoi(nbr2));
}

void ft_result_draw(char *filename, char *nbr1, char *nbr2)
{
	if(ft_verify_function_name(filename))
	{
		ft_select_function(filename, nbr1, nbr2);
	}
}

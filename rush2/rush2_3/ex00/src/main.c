/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <mirivera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:32:50 by mirivera          #+#    #+#             */
/*   Updated: 2018/11/11 16:39:32 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_header.h"
#include <stdlib.h>

int		main(int argc, char **argv)
{
	if(argc == 3)
	{
		ft_result_draw(argv[0], argv[1], argv[2]);
	}
	else if(argc == 5)
	{
		//ft_result_comparsion();
	}
	else
		ft_putstr("aucune");
	/*
	if(argc == 3)
	{
		int n2;
		int n3;

		n2 = atoi(argv[2]);
		n3 = atoi(argv[3]);
		
		if (argv[1] == "rush00")
		return (rush00(n2, n3));
		//execute the rush in question
	}
	 else
	{

	} */
	return (0);
}

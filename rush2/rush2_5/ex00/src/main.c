/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <mirivera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:32:50 by mirivera          #+#    #+#             */
/*   Updated: 2018/11/11 18:53:34 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_header.h"
#include <stdlib.h>

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_result_draw(argv[0], argv[1], argv[2]);
	}
	else if (argc == 5)
	{
	}
	else
		ft_putstr("aucune");
	return (0);
}

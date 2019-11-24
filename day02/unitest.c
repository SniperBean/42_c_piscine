/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 10:33:22 by sxu               #+#    #+#             */
/*   Updated: 2018/10/25 22:37:41 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"

#include "ex00/ft_print_alphabet.c"
#include "ex01/ft_print_reverse_alphabet.c"
#include "ex02/ft_print_numbers.c"
#include "ex03/ft_is_negative.c"
#include "ex04/ft_print_comb.c"
#include "ex05/ft_print_comb2.c"
#include "ex06/ft_putnbr.c"
//#include "ex07/ft_print_combn.c"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	char a = 5;
	int i = write(1, &a, 1);
	printf("%d", i);
	//ex00
	//ft_print_alphabet();
	
	//ex01
	//ft_print_reverse_alphabet();
	
	//ex02
	//ft_print_numbers();
	
	//ex03
	//ft_is_negative(1);
	//ft_is_negative(0);
	//ft_is_negative(-1);
	
	//ex04
	//ft_print_comb();
	
	//ex05
	//ft_print_comb2();
	
	//ex06
	//ft_putnbr(1242);
	
	//ex07
	//ft_print_combn(3);
}



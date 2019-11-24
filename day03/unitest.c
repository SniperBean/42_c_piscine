/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 10:33:22 by sxu               #+#    #+#             */
/*   Updated: 2018/10/26 23:08:34 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"

#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_strrev.c"
#include "ex08/ft_atoi.c"
#include "ex09/ft_sort_integer_table.c"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	
	//ex00
	/*
	int *p;
	int num = 1
	p = &num;
	ft_ft(p);
	printf("%d", *p);
	*/

	//ex01
	/*
	int num = 1;
	int *p1			=	&num;
	int **p2		=	&p1;
	int ***p3		=	&p2;
	int ****p4		=	&p3;
	int *****p5		=	&p4;
	int ******p6	=	&p5;
	int *******p7	=	&p6;
	int ********p8	=	&p7;
	int *********p9	=	&p8;
	ft_ultimate_ft(p9);
	printf("%d ", *********p9);
	*/

	//ex2
	/*
	int num1 = 42;
	int num2 = 24;
	int *a;
	int *b;
	a = &num1;
	b = &num2;
	printf("%d,%d\n", *a, *b);
	ft_swap(a, b);
	printf("%d,%d\n", *a, *b);
	*/

	//ex3
	/*
	int a = 7;
	int b = 3;
	int div;
	int mod;
	int* pdiv = &div;
	int* pmod = &mod;
	ft_div_mod(a, b, pdiv, pmod);
	printf("div = %d, mod = %d", *pdiv, *pmod);
	*/

	//ex04
	/*
	int a = 7;
	int b = 3;
	int *pdiv = &a;
	int *pmod = &b;
	printf("(a) = %d, (b) = %d\n", *pdiv, *pmod);
	ft_ultimate_div_mod(pdiv, pmod);
	printf("div(a) = %d, mod(b) = %d\n", *pdiv, *pmod);
	*/

	//ex05
	/*
	char* str  = "Hello!";
	ft_putstr(str);
	*/

	//ex06
	/*
	char* str = "Hello!";
	printf("lenth = %d\n", ft_strlen(str));
	*/

	//ex07
	/*
	char str[15];
	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	str[5] = '\0';
	ft_putstr(str);
	ft_putstr(ft_strrev(str));
	*/	

	//ex08
	
	char str[15];
	str[0] = '-';
	str[1] = '8';
	str[2] = ' ';
	str[3] = '9';
	str[4] = '\0';
	printf("%d", ft_atoi(str));
	
	//ex09
	/*
	int i = 0;
	int size = 10;
	int tab[size];
	tab[0] = 6;
	tab[1] = 12;
	tab[2] = 67;
	tab[3] = 99;
	tab[4] = 1;
	tab[5] = 23;
	tab[6] = 90;
	tab[7] = 76;
	tab[8] = 50;
	tab[9] = 68;

	for(i=0; i<10; i++){
		printf("%d\t", tab[i]);
	}
	printf("\nsorted\n");
	ft_sort_integer_table(tab, size);

	for(i=0; i<10; i++){
		printf("%d\t", tab[i]);
	}
	*/
}



#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#include "ex00/ft_putstr.c"
#include "ex01/ft_putnbr.c"
#include "ex03/ft_strcpy.c"
#include "ex04/ft_strncpy.c"
#include "ex05/ft_strstr.c"
#include "ex06/ft_strcmp.c"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	//int input;
	//char *a = argv[1];
	//input = atoi(a);
	//ex00
	
	//ex01
	//ft_putnbr(input);

	//ex02
	char str1[15];
	char str2[15];

	str1[0] = 't';
	str1[1] = 'e';
	str1[2] = 's';
	str1[3] = 't';
	str1[4] = '1';
	str1[5] = '\0';
	//str1[6] = '\n';
	//str1[7] = '\0';
	//ft_strcpy(str2, str1);
	//ft_putstr(str2);
	
	//ex03
	//ft_strncpy(str1, "urop\0", 5);
	//ft_putstr(str1);
	
	//ex04
	//ft_putstr(ft_strstr("asddf", "ad"));
	
	//ex05
	printf("%d\n", ft_strcmp("ABc", "abc"));
	printf("%d\n", ft_strcmp("abc", "abc"));
	printf("%d\n", ft_strcmp("ABCD", "ABC"));
	printf("%d\n", ft_strcmp("ABCD", "abcde"));

	printf("\n strcmp \n");
	//strcmp
	printf("%d\n", strcmp("ABc", "abc"));
	printf("%d\n", strcmp("abc", "abc"));
	printf("%d\n", strcmp("ABCD", "ABC"));
	printf("%d\n", strcmp("ABCD", "abcde"));
}

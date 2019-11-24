/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 18:27:28 by sxu               #+#    #+#             */
/*   Updated: 2018/11/01 11:04:00 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src, int line, int argc)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' || dest[i] != 0)
	{
		i++;
	}
	while (src[j] != '\0' || src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (line < argc - 1)
		dest[i] = '\n';
	else
		dest[i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;

	i = 1;
	str = (char*)malloc(sizeof(char) * argc);
	while (i < argc)
	{
		str = ft_strcat(str, argv[i], i, argc);
		i++;
	}
	return (str);
}

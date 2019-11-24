/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 12:37:49 by sxu               #+#    #+#             */
/*   Updated: 2018/11/01 18:19:18 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_whitespace(char c)
{
	if (c == '\t' || c == '\n' || c == ' ')
		return (1);
	else
		return (0);
}

int		ft_word_count(char *str)
{
	int i;
	int c;

	if (*str == '\0')
		return (0);
	i = 0;
	c = 0;
	while (*str)
	{
		if (ft_is_whitespace(*str))
		{
			str++;
			c = 0;
		}
		else
		{
			if (c == 0)
				i++;
			c = 1;
			str++;
		}
	}
	return (i);
}

char	**ft_allocate_memory(char *str, int word_count, int i, int j)
{
	char	**arr;

	arr = (char**)malloc(sizeof(char*) * (word_count + 1));
	if (*str == '\0' && ((arr[0] = 0) || 1))
		return (arr);
	while (ft_is_whitespace(*str))
		str++;
	while (*str)
	{
		if (ft_is_whitespace(*str))
		{
			arr[i++] = (char*)malloc(sizeof(char) * (j + 1));
			while ((j = 0) || ft_is_whitespace(*str))
				str++;
			str--;
		}
		else
			j++;
		if (*(str++ + 1) == '\0')
			arr[i] = (char*)malloc(sizeof(char) * (j + 1));
	}
	if (!(ft_is_whitespace(*(str - 1))))
		i++;
	arr[i] = 0;
	return (arr);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		word_count;
	char	**arr;

	i = 0;
	j = 0;
	word_count = ft_word_count(str);
	arr = ft_allocate_memory(str, word_count, 0, 0);
	while (ft_is_whitespace(*str))
		str++;
	while (i < word_count)
	{
		if (ft_is_whitespace(*str))
		{
			while (ft_is_whitespace(*str))
				str++;
			arr[i][j] = '\0';
			i += (j != 0) ? 1 : 0;
			j = 0;
		}
		else
			arr[i][j++] = *str++;
	}
	return (arr);
}

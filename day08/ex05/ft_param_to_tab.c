/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 11:17:29 by sxu               #+#    #+#             */
/*   Updated: 2018/11/02 11:20:16 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char		*ft_strdup(char *src)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	i = 0;
	while (src[i])
	{
		++size;
		++i;
	}
	new = malloc(sizeof(char) * size);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int			ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

t_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*par;

	if (!(par = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	i = 0;
	while (i < ac)
	{
		par[i].size_param = ft_strlen(av[i]);
		par[i].str = av[i];
		par[i].copy = ft_strdup(av[i]);
		par[i].tab = ft_split_whitespaces(av[i]);
		++i;
	}
	par[i].str = 0;
	return (par);
}

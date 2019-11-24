/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:40:59 by sxu               #+#    #+#             */
/*   Updated: 2018/10/30 18:26:47 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (str[i] != '\0' || str[i] != 0)
	{
		flag = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
			flag = 1;
		else
			return (0);
		i++;
	}
	if (i == 0)
		return (1);
	return (flag);
}

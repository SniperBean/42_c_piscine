/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 13:33:36 by sxu               #+#    #+#             */
/*   Updated: 2018/10/30 18:23:07 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0' || str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' && flag == 0)
			str[i] += 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && flag == 1)
			flag = 0;
		else if (str[i] >= 'a' && str[i] <= 'z' && flag == 1)
		{
			str[i] -= 32;
			flag = 0;
		}
		if (str[i] == ' ' || str[i] == '-')
			flag = 1;
		if (str[i] >= '0' && str[i] <= '9')
			flag = 0;
		i++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 13:11:25 by sxu               #+#    #+#             */
/*   Updated: 2018/11/02 13:11:28 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ((str[i] - 97 + 42) % 26) + 97;
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = ((str[i] - 65 + 42) % 26) + 65;
		++i;
	}
	return (str);
}

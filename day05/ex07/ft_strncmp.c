/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 12:23:31 by sxu               #+#    #+#             */
/*   Updated: 2018/10/30 18:20:59 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			res;

	i = 0;
	j = 0;
	k = 0;
	res = 0;
	while ((s1[i] != '\0' || s1[i] != 0) && i < n)
		i++;
	while ((s2[j] != '\0' || s2[j] != 0) && i < n)
		j++;
	while (k < i || k < j)
	{
		if (res == 0 && s1[k] != s2[k])
		{
			res = s1[k] - s2[k];
		}
		k++;
	}
	return (res);
}

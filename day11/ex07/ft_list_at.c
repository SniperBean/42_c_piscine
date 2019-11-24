/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:29:18 by sxu               #+#    #+#             */
/*   Updated: 2018/11/07 14:30:23 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*nth;
	unsigned int	i;

	i = 0;
	nth = begin_list;
	if (nth == NULL)
		return (NULL);
	while (i < nbr && nth->next != NULL)
	{
		nth = nth->next;
		i++;
	}
	if (i < nbr)
		nth = NULL;
	return (nth);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:21:41 by sxu               #+#    #+#             */
/*   Updated: 2018/11/07 14:26:23 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = begin_list;
	if (!temp)
		return (i);
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

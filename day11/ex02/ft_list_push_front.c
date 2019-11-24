/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:55:07 by sxu               #+#    #+#             */
/*   Updated: 2018/11/07 14:24:55 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *front;
	t_list *temp;

	if (begin_list && *begin_list)
	{
		temp = *begin_list;
		front = ft_create_elem(data);
		front->next = temp;
		*begin_list = front;
	}
	else
		*begin_list = ft_create_elem(data);
}

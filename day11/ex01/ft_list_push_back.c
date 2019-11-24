/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 10:22:24 by sxu               #+#    #+#             */
/*   Updated: 2018/11/07 14:24:13 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *back;

	if (begin_list && *begin_list)
	{
		back = *begin_list;
		while (back->next != NULL)
			back = back->next;
		back->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

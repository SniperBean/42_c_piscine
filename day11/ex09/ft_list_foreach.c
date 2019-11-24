/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach..c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 19:44:57 by sxu               #+#    #+#             */
/*   Updated: 2018/11/07 14:33:40 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*curr;

	curr = begin_list;
	while (curr)
	{
		(*f)(curr->data);
		curr = curr->next;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:07:16 by sxu               #+#    #+#             */
/*   Updated: 2018/11/07 14:32:47 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*curr;
	t_list	*prec;

	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return ;
	prev = NULL;
	curr = *begin_list;
	prec = curr->next;
	while (prec != NULL)
	{
		curr->next = prev;
		prev = curr;
		curr = prec;
		prec = prec->next;
	}
	curr->next = prev;
	*begin_list = curr;
}

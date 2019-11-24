/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:06:27 by sxu               #+#    #+#             */
/*   Updated: 2018/11/07 14:29:37 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	if (!begin_list || !*begin_list)
	{
		(*begin_list)->next = NULL;
		(*begin_list)->data = NULL;
		free(*begin_list);
		return ;
	}
	if (*begin_list)
	{
		if ((*begin_list)->next != NULL)
			ft_list_clear(&(*begin_list)->next);
		(*begin_list)->next = NULL;
		(*begin_list)->data = NULL;
		free(*begin_list);
		*begin_list = NULL;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:56:26 by sxu               #+#    #+#             */
/*   Updated: 2018/11/07 14:29:07 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*head;
	t_list	*temp;
	int		i;

	head = NULL;
	temp = NULL;
	i = 0;
	if (ac <= 0)
		return (NULL);
	while (i < ac)
	{
		head = ft_create_elem(av[i]);
		head->next = temp;
		temp = head;
		i++;
	}
	return (head);
}

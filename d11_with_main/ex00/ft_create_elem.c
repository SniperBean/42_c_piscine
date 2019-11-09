/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 09:56:00 by sxu               #+#    #+#             */
/*   Updated: 2018/11/06 10:21:49 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h> //r

t_list	*ft_create_elem(void	*data)
{
	t_list *elem;

	if(!(elem = malloc(sizeof(t_list))))
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

int main()
{
	t_list *elem;
	void *data;
	int real_data = 42;
	data = &real_data;

	elem = malloc(sizeof(t_list));
	elem = ft_create_elem(data);

	printf("%d \n", *((int*)elem->data));
}

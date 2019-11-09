/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 10:22:24 by sxu               #+#    #+#             */
/*   Updated: 2018/11/06 10:53:24 by sxu              ###   ########.fr       */
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

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *back;
	
	if(begin_list && *begin_list)
	{
		back = *begin_list;
		while (back->next != NULL)
			back = back->next;
		back->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

int main()
{
	t_list *elem;
	void *data;
	void *data2;
	void *data3;
	int real_data = 42;
	int real_data2 = 54;
	int real_data3 = 97;
	data = &real_data;

	elem = malloc(sizeof(t_list));
	elem = ft_create_elem(data);

	printf("header = %d -> ", *((int*)elem->data));
	
	data2 = &real_data2;
	ft_list_push_back(&elem, data2);
	data3 = &real_data3;
	ft_list_push_back(&elem, data3);

	while (elem->next != NULL)
	{
		elem = elem->next;
		printf("%d", *(int*)elem->data);
		printf(" -> ");
	}
	printf("NULL\n");
}


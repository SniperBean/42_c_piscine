/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:42:44 by sxu               #+#    #+#             */
/*   Updated: 2018/11/06 12:51:58 by sxu              ###   ########.fr       */
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

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *last;

	last = NULL;
	if(begin_list)
	{
		last = begin_list;
		while (last->next != NULL)
			last = last->next;
	}
	return (last);
}

int main()
{
	t_list *null;
	t_list *head;
	t_list *mid;
	t_list *tail;

	int real_data1 = 42;
	int real_data2 = 54;
	int real_data3 = 97;

	void *data	= &real_data1;
	void *data2	= &real_data2;
	void *data3	= &real_data3;

	null->data = NULL;
	head = ft_create_elem(data);
	mid = ft_create_elem(data2);
	tail = ft_create_elem(data3);
	head->next = mid;
	mid->next = tail;

	
	printf("last data is %d\n", *((int*)ft_list_last(head)->data));
	printf("header = %d -> ", *((int*)head->data));
	while (head->next != NULL)
	{
		head = head->next;
		printf("%d", *(int*)head->data);
		printf(" -> ");
	}
	printf("NULL\n");
}


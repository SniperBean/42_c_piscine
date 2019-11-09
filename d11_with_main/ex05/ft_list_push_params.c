/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:56:26 by sxu               #+#    #+#             */
/*   Updated: 2018/11/06 14:44:52 by sxu              ###   ########.fr       */
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

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *head;
	t_list *temp;
	int i;

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

int main(int ac, char **av)
{
	t_list *head;
	
	head = ft_list_push_params(ac, av);
	if(ac > 1)
	{
		printf("head = %s", head->data);
		while (head->next != NULL)
		{
			head = head->next;
			printf(" -> ");
			printf("%s", head->data);
		}
		printf(" -> NULL\n");
	}
}

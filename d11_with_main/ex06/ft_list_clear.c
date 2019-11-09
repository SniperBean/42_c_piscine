/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:06:27 by sxu               #+#    #+#             */
/*   Updated: 2018/11/06 14:49:43 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h> //r

//r
t_list	*ft_create_elem(void	*data)
{
	t_list *elem;

	if(!(elem = malloc(sizeof(t_list))))
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}
//r
t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *head;
	t_list *temp;
	int i;

	i = 0;
	if(ac > 1)
	{
		while (i + 1 < ac)
		{
			if(i == 0)
			{
				head = ft_create_elem(av[1]);
				temp = head;
			}
			else
			{
				while (temp->next != 0)
					temp = temp->next;
				temp->next = ft_create_elem(av[i + 1]);
				temp = head;
			}
			i++;
		}
	}
	return (temp);
}

void	ft_list_clear(t_list **begin_list)
{
	if (!begin_list || !*begin_list)
	{
		(*begin_list)->next = NULL;
		(*begin_list)->data = NULL;
		free(*begin_list);
		return ;
	}
	if(*begin_list)
	{
		if((*begin_list)->next != NULL)
			ft_list_clear(&(*begin_list)->next);
		(*begin_list)->next = NULL;
		(*begin_list)->data = NULL;
		free(*begin_list);
		*begin_list = NULL;
	}
}


int main(int ac, char **av)
{
	t_list *head = NULL;

	head = ft_list_push_params(ac, av);
	
	ft_list_clear(&head);
	if(ac > 1 && head)
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

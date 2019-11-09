/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:07:16 by sxu               #+#    #+#             */
/*   Updated: 2018/11/06 17:54:44 by sxu              ###   ########.fr       */
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

void	ft_list_reverse(t_list **begin_list)
{
	t_list *prev;
	t_list *curr;
   	t_list *prec;

	if(*begin_list == NULL || (*begin_list)->next == NULL)
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

int main(int ac, char **av)
{
	t_list *head = NULL;
	t_list *reve = NULL;

	head = ft_list_push_params(ac, av);
	reve = head;
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

	ft_list_reverse(&reve);

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


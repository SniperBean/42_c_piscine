/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:29:18 by sxu               #+#    #+#             */
/*   Updated: 2018/11/06 15:38:02 by sxu              ###   ########.fr       */
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

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*nth;
	unsigned int	i;

	i = 0;
	nth = begin_list;
	if (nth == NULL)
		return (NULL);
	while (i < nbr && nth->next != NULL)
	{
		nth = nth->next;
		i++;
	}
	if(i < nbr)
		nth = NULL;

	return (nth);
}

int main(int ac, char **av)
{
	t_list *head;
	t_list *count;
	int i = 0;

	head = ft_list_push_params(ac, av);
	count = head;
	if(ac > 1)
	{
		printf("head = %d.%s", i++, head->data);
		while (head->next != NULL)
		{
			head = head->next;
			printf(" -> ");
			printf("%d.%s", i, head->data);
			i++;
		}
		printf(" -> NULL\n");
	}

	i = 3;
	count = ft_list_at(count, i);
	printf("\n%d.%s", i, count->data);	
}


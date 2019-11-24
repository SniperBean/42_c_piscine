/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:45:32 by sxu               #+#    #+#             */
/*   Updated: 2018/11/09 12:50:16 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree	*curr;

	if (!root || !*root || !item)
	{
		if (item && root)
			*root = btree_create_node(item);
		return ;
	}
	curr = *root;
	if (cmpf(item, curr->item) < 0)
	{
		if (curr->left)
			btree_insert_data(&curr->left, item, cmpf);
		else
			curr->left = btree_create_node(item);
	}
	else
	{
		if (curr->right)
			btree_insert_data(&curr->right, item, cmpf);
		else
			curr->right = btree_create_node(item);
	}
}

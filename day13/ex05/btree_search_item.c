/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:37:12 by sxu               #+#    #+#             */
/*   Updated: 2018/11/09 12:51:09 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (!root || !data_ref)
		return (0);
	if (cmpf(data_ref, root->item) == 0)
		return (root->item);
	if (root->left)
		return (btree_search_item(root->left, data_ref, cmpf));
	if (root->right)
		return (btree_search_item(root->right, data_ref, cmpf));
	return (0);
}

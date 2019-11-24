/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:13:33 by sxu               #+#    #+#             */
/*   Updated: 2018/11/08 19:20:26 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	if (!(node = (t_btree*)malloc(sizeof(t_btree))))
		return (NULL);
	node->item = item;
	node->left = 0;
	node->right = 0;
	return (node);
}

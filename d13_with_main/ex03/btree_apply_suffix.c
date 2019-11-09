/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:24:38 by sxu               #+#    #+#             */
/*   Updated: 2018/11/08 19:43:38 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"
#include <stdio.h>

void ft_putstr(void *nbr)
{
	printf("%d ", *((int*)nbr));
}

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

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_suffix(root->left, applyf);
	btree_apply_suffix(root->right, applyf);
	applyf(root->item);
}


int main()
{
	int real_data1 = 42;
	int real_data2 = 57;
	int real_data3 = 93;
	int real_data4 = 21;
	int real_data5 = 40;
	int real_data6 = 12;
	int real_data7 = 66;
	
	t_btree *root = btree_create_node(&real_data1);
	t_btree *nodeA = btree_create_node(&real_data2);
	t_btree *nodeB = btree_create_node(&real_data3);
	t_btree *nodeC = btree_create_node(&real_data4);
	t_btree *nodeD = btree_create_node(&real_data5);
	t_btree *nodeE = btree_create_node(&real_data6);
	t_btree *nodeF = btree_create_node(&real_data7);

	root->left = nodeA;
	root->right = nodeB;
	nodeA->left = nodeC;
	nodeA->right = nodeD;
	nodeB->left = nodeE;
	nodeB->right = nodeF;

	btree_apply_suffix(root, &ft_putstr);
}

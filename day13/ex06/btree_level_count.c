/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:39:13 by sxu               #+#    #+#             */
/*   Updated: 2018/11/09 12:49:00 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	max(int a, int b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

int	btree_level_count(t_btree *root)
{
	int left_c;
	int right_c;

	if (!root)
		return (0);
	left_c = btree_level_count(root->left);
	right_c = btree_level_count(root->right);
	return (max(left_c, right_c) + 1);
}

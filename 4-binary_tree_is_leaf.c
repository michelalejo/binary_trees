#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Funtion that check if the node is a leaf.
 * @node: Node of the binary tree.
 * Return: Return 1 if is a leaf, if is not a leaf 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}


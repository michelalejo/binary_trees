#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_sibling - Function that finds the sibling of a node.
 * @node: Pointer to the node to find the sibling.
 * Return: Return a pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	else if (node->parent->right == node)
		return (node->parent->left);

	else
		return (NULL);
}

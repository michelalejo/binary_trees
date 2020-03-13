#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_is_full - Function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: If the tree is full return a pointer to it else NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int nodes_l, nodes_r;

	if (!tree)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	nodes_l = binary_tree_is_full(tree->left);
	nodes_r = binary_tree_is_full(tree->right);
	if (nodes_l == 0 || nodes_r == 0)
		return (0);

	return (1);
}
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - Function that counts the nodes at a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: If the node is has a child and how much.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);


	return (count + (!binary_tree_is_leaf(tree)));
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 * Return: If tree is NULL return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t ctn = 0;

	if (tree == NULL)
		return (0);
	ctn += binary_tree_size(tree->left) + 1;
	ctn += binary_tree_size(tree->right);
	return (ctn);
}

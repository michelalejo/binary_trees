#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t ctn1 = 0;
	size_t ctn2 = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	return (1);
	ctn1 = binary_tree_leaves(tree->left);
	ctn2 = binary_tree_leaves(tree->right);
	return (ctn1 + ctn2);
}

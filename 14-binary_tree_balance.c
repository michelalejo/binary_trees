#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_balance - Function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: If tree is NULL return 0 otherwise the balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: If tree is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		height_l = binary_tree_height(tree->left);
	if (tree->right)
		height_r = binary_tree_height(tree->right);

	if (height_l > height_r)
		return (1 + height_l);
	else
		return (1 + height_r);
}

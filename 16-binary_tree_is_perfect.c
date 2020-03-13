#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect.
 * @tree: Node to be check.
 * Return: Return pointer to node.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size, height, is_perfect;

	if (!tree)
		return (0);
	size = (int)binary_tree_size(tree);
	height = binary_tree_height(tree);
	is_perfect = size == (2 << height) - 1;
	return (is_perfect);
}
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
		height_l = 1 + binary_tree_height(tree->left);
	if (tree->right)
		height_r = 1 + binary_tree_height(tree->right);

	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);
}

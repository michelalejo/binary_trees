#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - Function that measures the depth of a node
 * @tree: Pointer to the root node of the tree
 * Return: If tree is NULL return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t ctn = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		ctn = binary_tree_depth(tree->parent) + 1;
	return (ctn);
}

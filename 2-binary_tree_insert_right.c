#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - Funtion that add node to right parent.
 * @parent: Parent node of the binary tree.
 * @value: Value to be add to the node.
 * Return: Return pointer to node or NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	struct binary_tree_s *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;

	if (parent->right == NULL)
	{
		parent->right = new;
	}
	else
	{
		new->right = parent->right;
		parent->right->parent = new;
		parent->right = new;
	}

	return (new);
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - Funtion that add node to left parent.
 * @parent: Parent node of the binary tree.
 * @value: Value to be add to the node.
 * Return: Return pointer to node or NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	new->right = NULL;
	new->left = NULL;
	new->parent = parent;

	if (parent->left == NULL)
	{
		parent->left = new;
	}
	else
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
	}

	return (new);
}


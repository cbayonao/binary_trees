#include "binary_trees.h"
/**
 * binary_tree_insert_left - Function that inserts a
 * node as the left-child of another node
 * @parent: Is a pointer to the node to insert the left-child in.
 * @value: Is the value to store in the new node.
 * Return: a pointer to the created node,
 *or NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left = node;
		node->left->parent = node;
	}
	else
		parent->left = node;
	return (node);
}

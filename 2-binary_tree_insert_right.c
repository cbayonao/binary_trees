#include "binary_trees.h"
/**
 * binary_tree_insert_right - Function that inserts a
 * node as the right-child of another node.
 *@parent: Is a pointer to the node to insert the right-child in.
 *@value: Is the value to store in the new node.
 *Return: a pointer to the created node, or NULL
 * on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;
	if (parent->right != NULL)
	{
		node->parent = parent;
		parent->right->parent = node;
		node->right = parent->right;
	}
	parent->right = node;
	return (node);
}

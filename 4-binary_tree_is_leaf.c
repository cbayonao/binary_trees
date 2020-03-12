#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Function that checks if a node is a leaf.
 *@node: is a pointer to the node to check.
 *Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || (node->right) || (node->left)) ? 0 : 1);
}

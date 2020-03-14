#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 *@tree: is a pointer to the root node of the tree to measure the height.
 * Return: size_t or return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (!tree || (!tree->right && !tree->left))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);

}

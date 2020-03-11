#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    int node1 = 0, node2 = 0;

    if (!tree)
	return (0);

    node1 = binary_tree_size(tree->left);
    node2 = binary_tree_size(tree->right);
    node1 += node2;
    return (node1 + 1);
}

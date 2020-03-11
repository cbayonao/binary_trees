#include "binary_trees.h"
/**
 * binary_tree_depth - Function that measures the depth of a node in a binary tree.
 *@tree: Is a pointer to the node to measure the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    int depth = 0;

    if (!tree->parent || !tree)
	return (0);
    depth = binary_tree_depth(tree->parent);
    return (depth + 1);
}
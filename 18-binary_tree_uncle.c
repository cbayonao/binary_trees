#include "17-binary_tree_sibling.c"
/**
 *binary_tree_uncle - Function that finds the uncle of a node.
 *@node: is a pointer to the node to find the uncle.
 * Return: the uncle of the node or 0 if node is null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}

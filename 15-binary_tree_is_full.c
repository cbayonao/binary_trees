#include "9-binary_tree_height.c"
#include "12-binary_tree_leaves.c"
/**
 * binary_tree_is_full - Function that checks if a binary
 * tree is full.
 *@tree: is a pointer to the root node of the tree to check.
 * Return: 1 if is full or 0 is not full or tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return ((binary_tree_is_full(tree->left) &&
			 (binary_tree_is_full(tree->right))));
	return (0);
}

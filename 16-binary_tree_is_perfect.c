#include "9-binary_tree_height.c"
#include "12-binary_tree_leaves.c"
#include "13-binary_tree_nodes.c"
/**
 * _pow_recursion - check the code for Holberton School students.
 *@x: integer.
 *@y: integer.
 * Return: Power between two numbers
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y < 0)
		return (-1);
	else
		return (1);
}
/**
 *binary_tree_is_perfect - Function that checks if a binary
 * tree is perfect.
 *@tree: is a pointer to the root node of the tree to check.
 * Return: 1 if is full or 0 is not full or tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((_pow_recursion(2, binary_tree_height(tree))) == (int)binary_tree_leaves(tree))
		return (1);
	else
		return (0);
}

#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_height - Function that measures the height
 * of a binary tree.
 *@tree: is a pointer to the root node of the tree to
 * measure the height.
 * Return: balance factor of a binary tree or 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
/**
 * binary_tree_balance - Function that measures the balance
 * factor of a binary tree.
 * @tree: Is a pointer to the root node of the tree to
 * measure the balance factor.
 * Return: balance factor or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t heightr;
	size_t heightl;

	if (!tree)
		return (0);
	heightr = binary_tree_height(tree->right);
	heightl = binary_tree_height(tree->left);
	return (heightl - heightr);
}

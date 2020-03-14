#include "10-binary_tree_depth.c"
#include "binary_trees.h"
/**
 * binary_tree_ancestor - function that finds the lowest common
 * ancestor of two nodes
 * @first: is a pointer to the first node.
 * @second: is a pointer to the second node.
 *
 **/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
    size_t myfirst, mysecond;

    if (!first || !second)
	return (NULL);

    myfirst = binary_tree_depth(first);
    mysecond = binary_tree_depth(second);
    if (myfirst < mysecond)
    {
	second = second->parent;
	mysecond--;
    }
    if (myfirst > mysecond)
    {
	first = first->parent;
	myfirst--;
    }
    if (first && second)
    {
	if (first == second)
	    return ((binary_tree_t *)first);
	first = first->parent;
	second = second->parent;
    }
    return ((binary_tree_t *)first);
}

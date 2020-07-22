#include "binary_trees.h"

/**
 * binary_tree_is_root - check whether the given node is a root or not
 * @node: pointer to the node to check
 *
 * Return: 1 if a given node is root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node || node->parent)
		return (0);
	return (1);
}

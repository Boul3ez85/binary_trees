#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check whether if node is leaf or not
 * @node: pointer to a node to check
 *
 * Return: 1 if a given node is leaf, otherwise return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}

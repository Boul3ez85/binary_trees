#include "binary_trees.h"

/**
 * binary_tree_nodes - count all nodes with at least 1 child
 * @tree: a pointer to a root node
 *
 * Return: number of nodes with at least 1 child, otherwise 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t a = 0;

	if (!tree)
		return (0);
	if (tree)
	{
		if (tree->left || tree->right)
			a++;
		if (tree->left)
			a += binary_tree_nodes(tree->left);
		if (tree->right)
			a += binary_tree_nodes(tree->right);
	}
	return (a);
}

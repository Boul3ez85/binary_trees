#include "binary_trees.h"

/**
 * binary_tree_size - return the size of a given binary_tree
 * @tree: a pinter to a root node
 *
 * Return: size of a given binary tree, otherwise 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));

	return (0);
}

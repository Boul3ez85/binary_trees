#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a given bianry tree is full
 * @tree: a pointer to a root node
 *
 * Return: 1 if a binary tree is full, otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left)
				&& binary_tree_is_full(tree->right));
	return (0);
}

#include "binary_trees.h"

/**
 * binary_tree_postorder - a function to traverse a binary tree in post-order
 * @tree: a pointer to the root node
 * @func: a pointer to the printvalue function
 *
 * Return: Void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !(*func))
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

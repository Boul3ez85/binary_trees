#include "binary_trees.h"

/**
 * binary_tree_preorder - a function to traverse a binary tree in pre-order
 * @tree: a pointer to the root node
 * @func: a pointer to the printvalue function
 *
 * Return: Void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	printvalue(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}

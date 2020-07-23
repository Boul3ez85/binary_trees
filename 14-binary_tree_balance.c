#include "binary_trees.h"

/**
 * binary_tree_balance - return the balance factor of a given binary tree
 * @tree: a pointer to root node
 *
 * Return: the balance factor, otherwise 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int r, l;

	if (!tree)
		return (0);
	if (tree)
	{
		l = (tree->left)
			? (int)binary_tree_height(tree->left) : -1;
		r = (tree->right)
			? (int)binary_tree_height(tree->right) : -1;
	}
	return (l - r);
}


#include "binary_trees.h"

/**
 * binary_tree_height - return the height of a given binary tree
 * @tree: a pointer to a root node
 *
 * Return: return the height of a given binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t max_left, max_right, max = 0;

	if (tree)
	{
		max_left = tree->left ? binary_tree_height(tree->left) + 1 : 0;
		max_right = tree->right ? binary_tree_height(tree->right) + 1 : 0;

		max += (max_left > max_right ? max_left : max_right);
	}
	return (max);
}

#include "binary_trees.h"

/**
 * printvalue - a function to print the node value
 * @value: the value of node
 *
 * Return: Void
 */

void printvalue(int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	new->n = value;

	printf("%d\n", value);
}

/**
 * binary_tree_preorder - a function to traverse a binary tree in pre-order
 * @tree: a pointer to the root node
 * @func: a pointer to the printvalue function
 *
 * Return: Void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !(*func))
		return;

	printvalue(tree->n);
	binary_tree_preorder(tree->left, printvalue);
	binary_tree_preorder(tree->right, printvalue);

}

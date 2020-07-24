#include "binary_trees.h"

/**
 * binary_tree_sibling - found the sibling of a given node
 * @node: a pointer to a given node
 *
 * Return: a pointer to sibling of a node, null otherwise
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *p, *s;

	p = node->parent;
	if (!node || !p)
		return (NULL);

	if (p->left == node)
		s = p->right;
	if (p->right == node)
		s = p->left;
	return (s);
}

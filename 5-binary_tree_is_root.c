#include "binary_trees.h"

/**
 * binary_tree_is_root - Determines whether a given node is the root node
 * @node: root to be evaluated
 *
 * Return: 1 if node is a root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent)
		return (0);
	return (1);
}

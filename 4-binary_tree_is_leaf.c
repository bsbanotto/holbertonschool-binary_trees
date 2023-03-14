#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf (i.e. is not a parent node)
 * @node: node to check
 *
 * Return: 0 if not a leaf, 1 if is a leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if ((node->left && node->right) || node == NULL)
		return (0);
	return (1);
}

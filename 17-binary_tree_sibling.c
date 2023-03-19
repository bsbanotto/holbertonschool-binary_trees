#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a given node
 * @node: node to find sibling of
 *
 * Return: pointer to sibling node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);
	return (node->parent->right);
}

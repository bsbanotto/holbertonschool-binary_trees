#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of the binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size1 = 0;
	size_t size2 = size1;

	if (tree == NULL)
		return (0);
	size1 = binary_tree_size(tree->left);
	size2 = binary_tree_size(tree->right);

	return (size2 + ++size1);
}

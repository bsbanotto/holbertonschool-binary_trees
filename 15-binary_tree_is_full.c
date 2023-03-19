#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks whether a binary tree is full
 * @tree: pointer to root node of tree to check
 *
 * Return: 1 if full, 0 otherwise, 0 if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_is_full(tree->left) &&
	binary_tree_is_full(tree->right));
}

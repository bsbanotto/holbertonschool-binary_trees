#include "binary_trees.h"

/**
 * isBSTUtil - Utility function to test if BST is valid
 * @tree: pointer to tree node to test
 * @min: some variable
 * @max: some variable
 *
 * Return: 1 if true, 0 if false
 */

int isBSTUtil(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (isBSTUtil(tree->left, min, tree->n - 1) &&
	isBSTUtil(tree->right, tree->n + 1, max));
}


/**
 * binary_tree_is_bst - Checks if a binary tree is is a valid BST
 * @tree: pointer to root node of tree to check
 *
 * Return: 1 if valid, 0 otherwise
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (isBSTUtil(tree, INT_MIN, INT_MAX));
}

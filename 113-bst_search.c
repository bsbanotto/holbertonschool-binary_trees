#include "binary_trees.h"

/**
 * bst_search - Searches for a value in a BST
 * @tree: pointer to root node of BST to search
 * @value: value to search for
 *
 * Return: pointer to node containing the value, or NULL
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);

	if (tree->n == value)
		return ((bst_t *)tree);

	if (tree->n < value)
		return (bst_search(tree->right, value));

	if (tree->n > value)
		return (bst_search(tree->left, value));

	return (NULL);
}

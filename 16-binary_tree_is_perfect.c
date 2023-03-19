#include "binary_trees.h"

/**
 * is_perfect_recursive - Recursive call to see if binary tree is perfect
 * @tree: pointer to root node of tree to test
 * @depth: depth of left branches
 * @level: Current level in tree
 *
 * Return: 1 if perfect, 0 otherwise
 */

int is_perfect_recursive(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_recursive(tree->left, depth, level + 1) &&
			is_perfect_recursive(tree->right, depth, level + 1));
}


/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: pointer to root node of tree to check
 *
 * Return: 1 if perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = 0;
	const binary_tree_t *temp;

	temp = tree;

	while (temp != NULL)
	{
		depth++;
		temp = temp->left;
	}
	return (is_perfect_recursive(tree, depth, 0));
}

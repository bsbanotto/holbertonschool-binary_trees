#include "binary_trees.h"

/**
 * bst_insert - Function to insert a value in a Binary Search Tree
 * @tree: Double pointer to root node of the BST
 * @value: value to store in inserted node
 *
 * If the address stored in tree is NULL created node must become the root node
 * If the value is already present in the tree, it must be ignored
 * Return: pointer to the created node or NULL on failure
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new = NULL;

	if (tree == NULL)
		return (NULL);

	if ((*tree) == NULL)
	{
		new = binary_tree_node((*tree), value);
		*tree = new;
		return (new);
	}

	if (value < (*tree)->n)
	{
		if ((*tree)->left == NULL)
		{
			new = binary_tree_node((*tree), value);
			(*tree)->left = new;
			return (new);
		}
		return (bst_insert(&(*tree)->left, value));
	}
	if (value > (*tree)->n)
	{
		if ((*tree)->right == NULL)
		{
			new = binary_tree_node((*tree), value);
			(*tree)->right = new;
			return (new);
		}
		return (bst_insert(&(*tree)->right, value));
	}

	return (NULL);
}

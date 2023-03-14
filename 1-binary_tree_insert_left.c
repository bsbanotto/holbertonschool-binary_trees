#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: value to be stored in the new node
 *
 * Description: If `parent` already has a left-child, the new node must take
 * its place, and the old left-child must be set as the left-child of the new
 * node
 *
 * Return: pointer to the newly created node, or NULL on failure or if parent
 * is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;

	if (parent == NULL)
		return (NULL);

	else if (parent->left == NULL)
	{
		parent->left = new;
		return (new);
	}
	else
	{
		temp = malloc(sizeof(binary_tree_t));
		if (temp == NULL)
			return (NULL);
		temp = parent->left;
		temp->parent = new;
		parent->left = new;
		new->left = temp;
		return (new);
	}
}

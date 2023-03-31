#include "binary_trees.h"

/**
 * array_to_bst - Converts an array to a BST
 * @array: pointer to array to be converted
 * @size: number of elements in the array
 * If value is already present, it must be ignored
 *
 * Return: pointer to the root node of the BST
 */

bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *tree = NULL;

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		bst_insert(&tree, array[i]);

	return (tree);
}

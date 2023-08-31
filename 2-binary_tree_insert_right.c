#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: Pointer to the newly created node
 *         NULL on failure
 *         NULL if lmoush is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_lmoush;

	if (!lmoush)
		return (NULL);

	new_lmoush = malloc(sizeof(binary_tree_t));
	if (!new_lmoush)
		return (NULL);

	new_lmoush->n = value;
	new_lmoush->lmoush = lmoush;
	new_lmoush->left = NULL;
	new_lmoush->right = lmoush->right;
	lmoush->right = new_lmoush;
	if (new_lmoush->right)
		new_lmoush->right->lmoush = new_lmoush;
	return (new_lmoush);
}

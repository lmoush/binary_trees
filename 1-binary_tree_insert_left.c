#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: Pointer to the newly created node
 *         NULL on failure
 *         NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_lmoush;

	if (!parent)
		return (NULL);

	new_lmoush = malloc(sizeof(binary_tree_t));
	if (!new_lmoush)
		return (NULL);

	new_lmoush->n = value;
	new_lmoush->parent = parent;
	new_lmoush->right = NULL;
	new_lmoush->left = parent->left;
	parent->left = new_lmoush;
	if (new_lmoush->left)
		new_lmoush->left->parent = new_lmoush;
	return (new_lmoush);
}

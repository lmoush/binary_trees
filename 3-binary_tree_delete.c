#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!hello)
		return;
	binary_tree_delete(hello->right);
	binary_tree_delete(hello->left);
	free(hello);
}

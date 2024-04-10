#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes - entire binary tree.
 * @tree: Pointer - root node.
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* Recurssive deletion */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}

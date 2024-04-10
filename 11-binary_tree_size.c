#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size - binary tree.
 * @tree: Pointer - root node
 * Return: Size of the tree, 
 *         0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;
	
	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree->left) + 1;
	size += binary_tree_size(tree->right);

	return (size);
}

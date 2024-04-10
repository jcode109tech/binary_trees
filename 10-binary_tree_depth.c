#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node
 * @tree: Pointer  - node to measure the depth
 * Return: Depth of node, 
 *         0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (depth);

	if (tree->parent == NULL)
		return (depth);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}

#include "binary_trees.h"

/**
 * binary_tree_insert_right -  creates a binary tree node
 * @parent: Pointer - parent node
 * @value: Value -  new node
 *
 * Return: Pointer - new node
 * Otherwise - NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode;

	if (parent == NULL)
	{
		return (NULL);
	}
	
	rightnode = malloc(sizeof(binary_tree_t));
	
	if (rightnode == NULL)
		return (NULL);

	rightnode->parent = parent;
	rightnode->n = value;
	rightnode->right = parent->right;
	rightnode->right = NULL;

	if (parent->right)
	{	
		rightnode->right = parent->right;
		parent->right->parent = rightnode;
	}
	parent->right = rightnode;

	return (rightnode);
}

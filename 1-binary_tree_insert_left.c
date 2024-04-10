#include "binary_trees.h"

/**
 * binary_tree_insert_left -  creates a binary tree node
 * @parent: Pointer - parent node
 * @value: Value -  new node
 *
 * Return: Pointer - new node
 * Otherwise - NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode;

	if (parent == NULL)
	{
		return (NULL);
	}
	
	leftnode = malloc(sizeof(binary_tree_t));
	
	if (leftnode == NULL)
		return (NULL);

	leftnode->parent = parent;
	leftnode->n = value;
	leftnode->left = parent->left;
	leftnode->right = NULL;

	if (parent->left)
	{
		leftnode->left = parent->left;
		parent->left->parent = leftnode;
	}
	parent->left = leftnode;

	return (leftnode);
}

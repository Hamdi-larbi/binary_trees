#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts
 * a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return:  pointer to the created node, or NULL
 * on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
		if (parent->left == NULL)
			return (NULL);
	}
	else
	{
		temp = parent->left;
		parent->left = binary_tree_node(parent, value);
		if (parent->left == NULL)
			return (NULL);
		parent->left->left = temp;
		temp->parent = parent->left;
	}
	return (parent->left);
}

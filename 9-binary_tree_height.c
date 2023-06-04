#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, and 0 otherwise. If node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_height - function that measures
 * the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hleft, hright;

	if (tree == NULL && binary_tree_is_leaf(tree) == 1)
		return (-1);
	if (tree == NULL)
		return (0);
	hleft = binary_tree_height(tree->left);
	hright = binary_tree_height(tree->right);
	if (hleft >= hright)
		return (hleft + 1);
	return (hright + 1);
}

#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts
 * the nodes with at least 1 child in a binary tree
 * @tree:  pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;

	if (tree == NULL)
		return (0);
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
	if (tree->left != NULL || tree->right != NULL)
		return (1);
	return (left_leaves + right_leaves);
}

#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of a binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);
	i = i + 1;
	binary_tree_size(tree->left);
	binary_tree_size(tree->right);
	return (i);
}

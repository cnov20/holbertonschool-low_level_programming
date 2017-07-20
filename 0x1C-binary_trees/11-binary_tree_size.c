#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root node of tree to measure size of
 *
 *
 * Return - size of binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

	size_t left_size = 0;
	size_t right_size = 0;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}

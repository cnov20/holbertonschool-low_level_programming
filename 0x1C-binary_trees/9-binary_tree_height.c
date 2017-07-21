#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node of tree to traverse
 *
 *
 * Return: Height of tree or 0 upon Failure
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	while (tree->left != NULL)
	{
		height_left += 1;
		tree = tree->left;
	}

	while (tree->right != NULL)
	{
		height_right += 1;
		tree = tree->right;
	}

	return (height_left + height_right);
}

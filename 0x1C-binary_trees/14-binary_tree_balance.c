#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to root node of tree to measure balance factor of
 *
 * Return - balance factor value or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
	{
		left_height = 0;
	}
	else
	{
		left_height = binary_tree_height(tree->left) + 1;
	}

	if (tree->right == NULL)
	{
                right_height = 0;
        }
        else
	{
		right_height = binary_tree_height(tree->right) + 1;
	}

	return (left_height - right_height);

}

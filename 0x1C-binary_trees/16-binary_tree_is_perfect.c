#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "10-binary_tree_depth.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node of tree to be checked
 *
 * Return - 1 if perfect - 0 if not perfect or tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth = binary_tree_depth(tree) + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (binary_tree_is_perfect(tree->left) + depth && binary_tree_is_perfect(tree->right));
}

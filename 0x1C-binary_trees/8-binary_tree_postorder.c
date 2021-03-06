#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses through binary tree, via post-order
 * @tree: pointer to root node of tree to traverse
 * @func: pointer to function to call for each node - node value as parameter
 *
 * Return - Nothing, Void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->n)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

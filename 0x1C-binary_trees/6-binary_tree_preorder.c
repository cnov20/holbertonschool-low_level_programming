#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses through binary tree, in pre-order fashion
 * @tree: pointer to root node of tree to traverse
 * @func: pointer to function to call for each node - node value is parameter
 *
 * Return: Nothing, Void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->n)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

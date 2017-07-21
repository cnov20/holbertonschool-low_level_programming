#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses through binary tree, via in-order fashion
 * @tree: pointer to root node of tree to traverse
 * @func: pointer to function to call for each node - node value as parameter
 *
 * Return: Nothing, Void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->n)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

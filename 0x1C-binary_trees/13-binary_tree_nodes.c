#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least one child in a binary tree
 * @tree: pointer to root node of tree to count nodes of
 *
 * Return - number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{


	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	else
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}

}

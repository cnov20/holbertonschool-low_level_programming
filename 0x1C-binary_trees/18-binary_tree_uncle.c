#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of a node
 * @node: pointer to the node to find the uncle of
 *
 * Return: pointer to node or NULL if no uncl found
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left &&
	    node->parent->parent->left != node->parent)
		return (node->parent->parent->left);

	if (node->parent->parent->right &&
	    node->parent->parent->right != node->parent)
		return (node->parent->parent->right);

	return (NULL);
}

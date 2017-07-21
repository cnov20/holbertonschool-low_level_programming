#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of a node
 * @node: pointer to the node to find the sibling of
 *
 * Return: pointer to node or NULL if no sibling found
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if ((node->n > node->parent->n) && (node->parent->left != NULL))
		return (node->parent->left);

	if ((node->n < node->parent->n) && (node->parent->right != NULL))
		return (node->parent->right);

	return (NULL);
}

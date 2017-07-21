#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of a node
 * @tree: pointer to the node to find the sibling of
 *
 * Return - pointer to node or NULL if no sibling found
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != NULL && node->parent->right != NULL)
		return (node->parent->right);

	if (node->parent->right != NULL && node->parent->left != NULL)
		return(node->parent->left);

	return (NULL);
}

#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @node: pointer to root node of tree to traverse
 *
 *
 * Return: Depth of node or 0 upon Failure
 */

size_t binary_tree_depth(const binary_tree_t *node)
{

	size_t depth = 0;

	if (node == NULL)
		return (0);

	while (node->parent != NULL)
	{
		node = node->parent;
		depth += 1;
	}

	return (depth);
}

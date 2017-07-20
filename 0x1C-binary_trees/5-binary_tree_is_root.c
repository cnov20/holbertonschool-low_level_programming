#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is root
 * @node: pointer to the node to check
 *
 * Return - 1 if True, 0 if False
 */

int binary_tree_is_root(const binary_tree_t *node)
{


	if (node->parent == NULL)
		return (1);

	return (0);

}

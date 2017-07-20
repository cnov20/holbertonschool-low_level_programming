#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as left child of another node
 * @parent: pointer to the parent of the node to be created
 * @value: value to be inserted into the newly created node
 *
 * Return - pointer to new node or NULL - upon failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

        binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);


	if(parent->left != NULL)
	{
		new_node->left= parent->left;
		parent->left = new_node;
		new_node->left->parent = new_node;
		return (new_node);
	}
	else
	{
		parent->left = new_node;
		return (parent->left);
	}

}

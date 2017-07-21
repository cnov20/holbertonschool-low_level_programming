#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right child of another node
 * @parent: pointer to the parent of the node to be created
 * @value: value to be inserted into the newly created node
 *
 * Return: pointer to new node or NULL - upon failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);


	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->right->parent = new_node;
		return (new_node);
	}
	else
	{
		parent->right = new_node;
		return (parent->right);
	}

}

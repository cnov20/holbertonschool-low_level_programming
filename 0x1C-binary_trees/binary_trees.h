#ifndef __BINARY_TREES_H__
#define __BINARY_TREES_H__

#include <stdlib.h>
#include <stdio.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */

/* Struct Declarations */

struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* Function Prototypes */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif /* __BINARY_TREES_H__ */

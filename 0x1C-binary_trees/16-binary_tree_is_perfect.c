#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"
#include "15-binary_tree_is_full.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node of tree to be checked
 *
 * Return: 1 if perfect - 0 if not perfect or tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;
	int size = 0;
	int full = 0;
	int eq_result = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	size = binary_tree_size(tree);

	full = binary_tree_is_full(tree);

	eq_result = _pow_recursion(2, left_height + 1) - 1;

	if (left_height == right_height && full == 1 && size == eq_result)
		return (1);

	return (0);
}

/**
 * _pow_recursion - function that recursively returns the value of
 *
 * @x: number to raise exponentially
 * @y: power to raise base(x) to
 *
 * Return: factorial, -1, 1, depending on value of n
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0 || x == 0 || x == 1)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{

		return (x * _pow_recursion(x, y - 1));
	}
}

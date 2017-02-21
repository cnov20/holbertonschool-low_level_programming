#include "holberton.h"

/**
 * swap_int - takes two integer values and swaps them
 * @a: first ineger whose value is to be swapped
 * @b: second integer whose value is to be swapped
 *
 * Return: (0)
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

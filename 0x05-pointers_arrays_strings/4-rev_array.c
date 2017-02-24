#include "holberton.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be iterated through
 * @n: number of elements in array
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	char converter;

	for (i = 0; i < n / 2; i++, j--)
	{
		converter = a[i];
		a[i] = a[j];
		a[j] = converter;
	}

}

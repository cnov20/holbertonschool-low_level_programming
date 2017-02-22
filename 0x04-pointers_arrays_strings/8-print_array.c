#include "holberton.h"
#include <stdio.h>

/**
 * print_array - iterates through array and prints all elements
 * @a: array to iterate through
 * @n: number of elements in array
 *
 * return: 0 - success - always
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i >= n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}

			i++;
	}

	printf("\n");
}

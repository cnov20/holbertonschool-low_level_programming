#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - executes a function given as parameter, on array elements
 * @array: pointer to array of elements to iterate through
 * @size: given number of elements in the array
 * @cmp: pointer to function that compares values
 *
 * Return: int - index of first element for which cmp func does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((cmp)(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}

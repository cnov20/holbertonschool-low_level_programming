#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as parameter, on array elements
 * @array: given array of elements to iterate through
 * @size: given size of array
 * @action:function to be executed
 *
 * Return - void - nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			(action)(array[i]);
		}
	}
}

#include "sort.h"

/**
 * bubble_sort - sorts an array in ascending order
 * @array: array of integers to be sorted
 * @size: size of given array
 *
 * Return - nothing, void
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	unsigned int temp;

	if (size < 2 || array == 0 || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}

}

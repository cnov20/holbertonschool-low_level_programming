#include "sort.h"

/**
 * selection_sort - sorts an array in ascending order
 * @array: actual array to be sorted
 * @size: given size of array to be sorted
 *
 * Return: nothing, void
 */

void selection_sort(int *array, size_t size)
{

	size_t i, j;
	int temp;
	int minimum;

	if (size < 2 || !array || !size)
		return;

	minimum = 0;
	for (i = 0; i < size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (array[i] < array[j])
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}

	}
}

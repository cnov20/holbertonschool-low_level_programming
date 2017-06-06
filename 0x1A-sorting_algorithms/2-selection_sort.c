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

	size_t i, j, minimum, temp;
	if (size < 2 || !array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minimum = 0;
		for (j = i+1; j < size; j++)
		{
			if (array[j] < array[minimum])
			{
				array[minimum] = array[j];
				print_array(array, size);
			}

		}
		temp = array[minimum];
		array[minimum] = array[j];
		array[j] = temp;
	}
}

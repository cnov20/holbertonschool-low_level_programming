#include "sort.h"

/**
 * bubble_sort - sorts an array in ascending order
 * @array - array of integers to be sorted
 * @size - size of given array
 *
 * Return - nothing, void
 */


void bubble_sort(int *array, size_t size)
{
	size_t i;
	unsigned int temp;
	unsigned int flag;

	flag = 0;
	for (i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			print_array(array, size);
			flag = 1;

			if (flag == 1)
			{
				i = -1;
			}

		}

	}
}

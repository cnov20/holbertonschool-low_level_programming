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
	int temp, index, minimum, flag;

	if (size < 2 || !array || !size)
		return;


	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		temp = array[i];
		minimum = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < minimum)
			{
				flag = 1;
				index = j;
				minimum = array[j];
			}

		}

		if (flag == 1)
		{
			array[i] = array[index];
			array[index] = temp;
			print_array(array, size);
		}
	}
}

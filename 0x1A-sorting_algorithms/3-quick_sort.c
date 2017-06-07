#include "sort.h"

/**
 * quick_sort - sorts array using pivot point to compare values against
 * @array: actual array to be sorted
 * @size: given size of array to be sorted
 *
 * Return: nothing, void
 */

void quick_sort(int *array, size_t size)
{
	int start, end;
	start = 0;
	end = size - 1;

	recursive_sort(array, start, end, size);
}

/**
 * recursive_sort - sorts array using pivot point to compare values against
 * @array: actual array to be sorted
 * @size: given size of array to be sorted
 * @start: beginning / lowest index of array
 * @end: ending / highest index of array
 *
 * Return: nothing, void
 */

void recursive_sort(int *array, int start, int end, size_t size)
{
	int pivot_point;

	if (start < end)
	{
		pivot_point = partition(array, start, end, size);
		recursive_sort(array, start, pivot_point - 1, size);
		recursive_sort(array, pivot_point + 1, end, size);
	}
}


/**
 * partition - sets value of certain index to compare all other elements against
 * @array: given array to figure out pivot value for
 * @start: start of array - lowest index
 * @end: end of array - highest index
 *
 * Return: int - value of pivot
 */


int partition(int *array, int start, int end, size_t size)
{
	int pivot_point;
	int i, j;

	pivot_point = array[end];
	i = start - 1;

	for(j = start; j <= end; j++)
	{
		if (array[j] <= pivot_point)
		{
			i++;
			swap_values(array, i, j);
			print_array(array, size);
		}

	}

	return (i);
}

/**
 * swap_values - swaps values of array elements if necessary
 * @array: given array to be swapped / sorted
 * @i: first array element to swap value of
 * @j: second array element to swap value of
 */

void swap_values(int *array, int i, int j)
{
	int temp;

	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}

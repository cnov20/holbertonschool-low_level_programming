#include "search_algos.h"
/**
 * binary_search - function searches for a given value,
 * utilizing the binary search method(algorithm) - in sorted array of integers
 * @array: pointer to the first element of array to be searched
 * @size: number of elements in given array
 * @value: value to search for
 * Return: First index where value is found, or -1 if value is NULL / Not found
 */

int binary_search(int *array, size_t size, int value)
{

	unsigned int low, mid, high;

	if (!array || !value || !size)
		return (-1);

	low = array[0];
	mid = size / 2;
	high = size - 1;

	while (low <= high)
	{

		print_search(low, high, array);

		if (array[mid] == value)
		{
			return (mid);
		}

		else if (value < array[mid])
		{
			high = mid - 1;

		}
		else if (value > array[mid])
		{
			low = mid + 1;
		}

		mid = (high + low) / 2;

	}

	return (-1);
}


void print_search(unsigned int low, unsigned int high, int *array)
{

	printf("Searching in array: ");

	while (low <= high)
	{
		if (low == high)
		{
			printf("%d", array[low]);
		}

		else
		{
			printf("%d, ", array[low]);
		}
		low += 1;
	}
	printf("\n");
}

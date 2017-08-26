#include "search_algos.h"
/**
 * linear_search - function searches for a given value,
 * utilizing the linear search method(algorithm)
 * @array: pointer to the first element of array to be searched
 * @size: number of elements in given array
 * @value: value to search for
 * Return: First index where value is found, or -1 if value is NULL / Not found
 */


int linear_search(int *array, size_t size, int value)
{

	unsigned int i;

	if(!array || !value || ! size)
		return (-1);

	for(i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}

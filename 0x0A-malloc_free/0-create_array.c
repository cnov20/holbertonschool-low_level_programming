#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates array of a given size, using malloc function
 * @size: size of array, in bytes
 * @c: array of characters
 *
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *) malloc(size * sizeof(char));


	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	if (arr == NULL || size == 0)
	{
		return (NULL);
	}

		return (arr);
}

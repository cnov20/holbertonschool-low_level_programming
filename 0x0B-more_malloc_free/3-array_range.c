#ifndef HOLBERTON_H
#define HOlBERTON_H
#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - creates array of a given size, using malloc function
 * @min: minimum value of array
 * @max: maximum value of array
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;
	int j;

	int range = max - min;

	arr = malloc((range + 1) * sizeof(int));

	if (arr == NULL || min > max)
	{
		return (NULL);
	}

	i = min;
	j = 0;
	while (i <= max)
	{
		arr[j] = min + i;
		i++;
		j++;
	}

	return (arr);
}
#endif /* HOLBERTON_H */

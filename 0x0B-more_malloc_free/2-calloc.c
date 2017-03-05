#ifndef HOLBERTON_H
#define HOlBERTON_H
#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocated memory for given size, using malloc function
 * @nmemb: number of elements of array
 * @size: byte size of array elements
 *
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	unsigned int i;

	arr = malloc(size * nmemb);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = size;
	}

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	return (arr);
}
#endif /*HOLBERTON_H*/

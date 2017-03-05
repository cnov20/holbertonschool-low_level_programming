#ifndef HOLBERTON_H
#define HOlBERTON_H
#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc - exit to check
 * @b: integer size to allocate memory for
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b * sizeof(unsigned int));

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}

	return (ptr);
}

#endif /* HOLBERTON_H */

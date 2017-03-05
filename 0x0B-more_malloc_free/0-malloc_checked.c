#ifndef HOLBERTON_H
#define HOlBERTON_H
#include <stdlib.h>

/*
 * *malloc_checked - function that allocates memory using malloc - exit to check
 * @b: integer size to allocate memory for
 *
 * Return: pointer to allocated memory
 */

void malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b * sizeof(unsigned int));

	if (ptr == NULL)
	{
		exit(98);
	}
	free(ptr);
}

#endif /* HOLBERTON_H */

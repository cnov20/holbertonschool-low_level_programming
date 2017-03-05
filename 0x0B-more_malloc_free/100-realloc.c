#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block, using malloc and free
 * @ptr: pointer to memory previously allocated
 * @old_size: size in bytes of allocated space for ptr(pointer)
 * @new_size: size in bytes of allocated space for new mremory block
 *
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	ptr = malloc(old_size);


	if (new_size > old_size)
	{

	}

	if (new_size == old_size)
	{
		return (ptr);

	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
	free(ptr);
}

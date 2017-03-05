#include "holberton.h"
#include <stdlib.h>
#include <string.h>

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
	void *ptr_new;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	else if ((ptr != NULL && new_size == 0) || new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size <= old_size)
	{
		return (ptr);
	}
	else if (new_size > old_size)
	{
		ptr_new = malloc(new_size);

	}
	if (new_size == old_size)
	{
		return (ptr);

	}
	else if (new_size > old_size)
	{
		ptr_new = _memcpy(ptr_new, ptr, old_size);
		free(ptr);
	}

	return (ptr_new);
}


/**
 * *_memcpy - function that copies memory area
 * @dest: pointer to memory area s
 * @src: constant byte
 * @n: number of bytes of memory area pointed to by src
 *
 * Return: pointer to memory area (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

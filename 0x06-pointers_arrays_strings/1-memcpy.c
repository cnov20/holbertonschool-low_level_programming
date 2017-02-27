#include "holberton.h"

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

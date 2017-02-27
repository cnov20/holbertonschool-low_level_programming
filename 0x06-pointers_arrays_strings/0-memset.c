#include "holberton.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer to memory area s
 * @b: constant byte
 * @n: number of bytes of memory area pointed to by s
 *
 * Return: pointer to memory area (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

#include "holberton.h"

/**
 * *_strncpy - copies a string
 * @dest: string to be copied
 * @src: string to store copied string
 * @n: max number of bytes
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

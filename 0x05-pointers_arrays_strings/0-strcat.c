#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @dest: string to be added to
 * @src: string to be appended
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	return (dest);
}

#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_array - creates array of a given size, using malloc function
 * @size: size of array, in bytes
 * @c: array of characters
 *
 * Return: NULL
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i;
	unsigned int len;

	len = strlen(str);

	s = (char *) malloc(len * sizeof(str));

	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}

	if (str == NULL)
	{
		return (NULL);
	}

	return (s);
}

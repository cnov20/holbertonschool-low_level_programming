#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - creates array of a given size, using malloc function
 * @str: size of array, in bytes
 *
 * Return: NULL if failing, pointer to string if successful
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i;
	unsigned int len;

	len = strlen(str + '\0');

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
	free(s);
}

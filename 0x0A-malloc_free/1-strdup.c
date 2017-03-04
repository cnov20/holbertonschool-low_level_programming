#include "holberton.h"
#include <stdlib.h>

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

	len = _strlen(str);

	s = malloc(sizeof(char) * len);

	if (str == '\0')
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}

	s[i] = '\0';
	return (s);
	free(s);
}

/**
 * _strlen - takes string and calculates length
 * @s: string taken in to find length of
 *
 * Return: i, string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

#include "holberton.h"
#include <stdlib.h>

/**
 * *_str_concat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 *
 * Return: NULL if failing, pointer to concatenated string if successful
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i;
	unsigned int j;
	unsigned int len1, len2, length;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	length = len1 + len2;
	s = malloc(sizeof(char) * length);

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		s[i + j] = s2[j];
	}

	return (s);
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

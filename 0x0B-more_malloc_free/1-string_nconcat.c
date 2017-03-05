#ifndef HOLBERTON_H
#define HOlBERTON_H
#include "holberton.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: size of string
 *
 * Return: NULL if failing, pointer to concatenated string if successful
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, len1, len2, length;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _strlen(s1); len2 = _strlen(s2);
	if (n < len2)
	{
		len2 = n;
	}
	len2++;
	length = len1 + len2;
	s = malloc(sizeof(n) * length);
	if (s == NULL)
	{
		return (NULL);
	}
	if (s1 != 0)
	{
		for (i = 0; i < len1; i++)
		{
			s[i] = s1[i];
		}
	}
	if (s2 != 0)
	{
		for (j = 0; j < n; i++, j++)
		{
			s[i] = s2[j];
		}
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

#endif /* HOLBERTON_H */

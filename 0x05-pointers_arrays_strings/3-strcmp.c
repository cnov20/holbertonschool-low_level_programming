#include "holberton.h"

/**
 * _strcmp- compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: int equal to difference between characters
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;

	}
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}

	return (0);
}

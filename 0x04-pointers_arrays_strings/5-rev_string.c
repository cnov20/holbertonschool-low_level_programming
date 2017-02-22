#include "holberton.h"

/**
 * rev_string - reverses a given string
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;

	int j;

	char converter;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	j--;

	i = 0;
	while (i < j)
	{
		converter = s[i];
		s[i] = s[j];
		s[j] = converter;
		j--;
		i++;
	}
}

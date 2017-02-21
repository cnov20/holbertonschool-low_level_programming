#include "holberton.h"

/**
 * _strlen - takes string and calculates length
 * @s: string taken in to find length of
 *
 * Return: (0)
 */

int _strlen(char *s)
{
	int i = 0;

	while (i < *s)
	{
		i++;
		s++;
	}
	return (i);
}

#include "holberton.h"

/**
 * _strpbrk - function that gets the length of a prefix substring
 * @s: substring one
 * @accept: substring two
 *
 * Return: pointer to byte in s, matching any byte in accept or NULL if none
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}

	}
	return (0);
}

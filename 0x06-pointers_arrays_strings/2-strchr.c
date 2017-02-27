#include "holberton.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: string to locate character in
 * @c: character to be located in string
 *
 * Return: pointer to first occurrence of character in string or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}

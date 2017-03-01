#include "holberton.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string to be searched for substring match
 * @needle: substring to be found in haystack
 *
 * Return: pointer to beginning of substring if found, or NULL if not found
 */

#include "holberton.h"

char *_strstr(char *haystack, char *needle)
{

	int i, j, subscript_start;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0, subscript_start = i; needle[j] != '\0'; j++, subscript_start++)
		{
			if (needle[j] != haystack[i] || haystack[subscript_start] != '\0')
			{
				break;
			}
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}

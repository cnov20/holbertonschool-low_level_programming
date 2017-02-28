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

	int hay_count, needle_count, length = 0, length2 = 0;

	while (haystack[length] != '\0')
	{
		length++;
	}
	length--;
	while (needle[length2] != '\0')
	{
		length2++;
	}
	length2--;
	for (hay_count = 0; haystack[hay_count] != '\0'; hay_count++)
	{
		for (needle_count = 0; needle[needle_count] != '\0';
		     needle_count++)
		{
			if (haystack[hay_count] == needle[0])
			{
				for (; haystack[hay_count] ==
			   needle[needle_count]; hay_count++, needle_count++)
				{
					if (haystack[hay_count] ==
					    needle[length2 - 1])
					{
						return (&(haystack[hay_count -
								 length2 + 1]));
					}
				}
			}
		}
	}
	return (NULL);
}

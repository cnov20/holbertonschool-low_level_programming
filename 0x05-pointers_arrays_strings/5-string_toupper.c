#include "holberton.h"

/**
 * *string_toupper - converts lowercase letters to uppercase
 * @char *: character array(pointer) to be iterated through
 *
 * Return: characters converted to uppercase
 */

char *string_toupper(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			ch[i] -= 32;
		}
	}
	return (ch);
}

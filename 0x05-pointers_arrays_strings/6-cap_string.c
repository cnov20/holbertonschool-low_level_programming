#include "holberton.h"

/**
 * *cap_string - converts lowercase letters to uppercase
 * @ch: character array(pointer) to be iterated through
 *
 * Return: words converted to uppercase
 */

char *cap_string(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		switch (ch[i])
		{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':

			if (ch[i + 1] >= 'a' && ch[i + 1] <= 'z')
			{
				ch[i + 1] -= 32;
			}
		}
		if (*ch >= 'a' && *ch <= 'z')
		{
			*ch -= 32;
		}
	}

	return (ch);
}

#include "holberton.h"

/**
 * rev_string - reverses a given string
 * @s: string to be reversed
 *
 * Return: (0)
 */

void rev_string(char *s)
{
        int i;
	int j;
	int length;
	char str[100];
	char rev[100];

	length = _strlen(s);

	j = 0;
	for (i = length - 1; i >= 0; i--);
        {
		rev = str[i];
		j++;
        }
	rev[j] = '\0';
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

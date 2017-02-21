#include "holberton.h"

/**
 * print_rev - prints string in reverse, followed by new line to std out
 * @s: string to be printed, with new line, to std out
 *
 * Return: (0)
 */

void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
        {
                i++;
        }

	i -= 1;
	j = i;
        while(j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}

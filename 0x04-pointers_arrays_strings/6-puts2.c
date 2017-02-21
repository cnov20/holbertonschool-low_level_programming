#include "holberton.h"

/**
 * puts2 - prints every other char of string followed by new line
 * @str: string of every other char to be printed, with new line
 *
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

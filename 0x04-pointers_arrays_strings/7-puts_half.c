#include "holberton.h"

/**
 * puts_half - prints second half of string followed by new line
 * @str: string taken in for second half to be printed
 *
 */

void puts_half(char *str)
{
	int half_length;
	int length;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		half_length = length / 2;
	}
	else
	{
		 half_length = (length - 1) / 2;
	}
	while (half_length < length)
	{
		_putchar(str[half_length]);
		half_length++;
	}

	_putchar('\n');
}

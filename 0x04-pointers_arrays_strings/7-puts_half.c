#include "holberton.h"

/**
 * puts_half - prints second half of string plus new line
 * @str: string to print half of
 *
 * Return: void
 */

void puts_half(char *str)
{
	int second;
	int length;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		second = length / 2;
	}
	else
	{
		 second = (length - 1) / 2;
	}
	while (second < length)
	{
		_putchar(str[second]);
		second++;
	}
	_putchar('\n');
}

#include "holberton.h"

/**
 * print_numbers - print the numbers 0 through 9 to standard output
 * @void: no input
 *
 * Return: none
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}

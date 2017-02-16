#include "holberton.h"

/**
 * print_most_numbers - print the numbers 0 through 9
 * (excluding 2 and 4) to standard output
 * @void: no input
 *
 * Return: none
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i < 2 || i == 3 || i > 4)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}

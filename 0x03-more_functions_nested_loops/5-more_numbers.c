#include "holberton.h"

/**
 * more_numbers - print the set of numbers from 0 to 14
 *  10 times to standard output
 * @void: no input
 *
 * Return: none
 */

void more_numbers(void)
{
	int i = 0;
	int j;
	while (i < 15)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
			{
				_putchar(j % 10 + '0');
			}
			_putchar(j + '0');
			j++;
		}

		_putchar('\n');
		i++;
	}
}

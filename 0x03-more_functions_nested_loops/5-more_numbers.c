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
	char i = 0;
	char j;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}

			_putchar(j % 10 + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}

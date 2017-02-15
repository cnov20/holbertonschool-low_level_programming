#include "holberton.h"

/**
 * times_table - Print the multiplaction table for the number 9
 *
 */

void times_table(void)
{
	int i = 0;
	int j;
	int result;

	while (i < 10)
	{
		j = 1;
		_putchar('0');
		while (j < 10)
		{
			result = i * j;
			if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}

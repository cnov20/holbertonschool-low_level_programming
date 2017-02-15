#include "holberton.h"

/**
 *print_times_table - prints variable multiplaction table for given number
 *@n: multiplication factor
 */

void print_times_table(int n)
{
	int result, i, j, t1, t2, t3;

	if (n > 15 || n < 0)
	{
		return;
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				result = i * j;
				t1 = result % 10;
				t2 = result / 10 % 10;
				t3 = result / 100;
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(t3 + '0');
				}
				else if (result >= 100)
				{
					_putchar(t1 + '0');
					_putchar(t2 + '0');
					_putchar(t3 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(t2 + '0');
					_putchar(t3 + '0');
				}
			}

		}
		_putchar('\n');
	}

}

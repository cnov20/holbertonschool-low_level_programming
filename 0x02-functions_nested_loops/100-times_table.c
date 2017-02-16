#include "holberton.h"

/**
 * print_times_table - Print the multiplaction table for the a given number
 * @n: Integer parameter to find multiplaction table
 */

void print_times_table(int n)
{
	int i = 0, j, result;

	if (n <= 15 && n >= 0)
	{
		while (i <= n)
		{
			j = 1;
			_putchar('0');
			while (j <= n)
			{
				result = i * j;
				if (result >= 10 && result <= 99)
				{
					_putchar(','); _putchar(' ');
					_putchar(' ');
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				else if (result >= 100)
				{
					_putchar(','); _putchar(' ');
					_putchar(result / 100 + '0');
					_putchar(result / 10 % 10 + '0');
					_putchar(result % 10 + '0');
				}
				else
				{
					_putchar(','); _putchar(' ');
					_putchar(' '); _putchar(' ');
					_putchar(result + '0');
				}

				j++;
			}
			_putchar('\n');
			i++;
		}

	}

}

#include "holberton.h"

/**
 * print_diagonal - function that prints slash character to draw diagonal line
 * @n: character that represents the underscore character
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');

	}
}

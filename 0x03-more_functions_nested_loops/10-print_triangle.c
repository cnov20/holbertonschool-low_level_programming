#include "holberton.h"

/**
 * print_square - function that prints a triangle shape followed by new line
 * @size: variable that represents the size of the triangle
 *
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else if (size > 0)
	{
		i = 1;
		while (i <= size)
		{
			j = 1;
			while (j <= size)
			{
				if (j <= size - i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}

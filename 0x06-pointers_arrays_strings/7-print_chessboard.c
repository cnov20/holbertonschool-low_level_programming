#include "holberton.h"

/**
 * print_chessboard - function that prints a chessboard
 * @a: two dimensional array
 *
 * Return: none
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}

}

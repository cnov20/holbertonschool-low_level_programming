#include "holberton.h"

/**
 * print_chessboard - function that prints a chessboard
 * @a: two dimensional array
 *
 * Return: none
 */

void print_chessboard(char (*a)[8])
{
	int rows;
	int columns;

	rows = 0;
	while (rows < 8)
	{
		columns = 0;
		while (columns < 8)
		{
			_putchar(a[rows][columns]);
			columns++;
		}
		_putchar('\n');
		rows++;
	}

}

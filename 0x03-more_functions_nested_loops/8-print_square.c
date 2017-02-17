#include "holberton.h"

/**
 * print_square - function that prints a square followed by new line
 * @size: variable that represents the size of the square
 *
 */

void print_square(int size)
{
        int i, j;

        if (size > 0)
        {
                i = 0;
                while (i < size)
                {
                        j = 1;
                        while (j < size)
                        {
				_putchar('#');
                                j++;
                        }
                        _putchar('#');
                        _putchar('\n');
                        i++;
                }
        }
        else
        {
                _putchar('\n');

        }
}

#include "holberton.h"

/**
 * print_number - function prints(putchar only) an integer of any sign and size
 * @n: integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	int b, div, length, last;

	last = n % 10;

	if (last < 0)
	{
		last *= -1;
		_putchar('-');
	}
	n /= 10;
	if (n < 0)
	{
		n *= -1;
	}
	b = n; length = 0; div = 1;
	while (b > 0)
	{
		length += 1; div *= 10; b /= 10;
	}
	div /= 10;
	while (div >= 1)
	{
		_putchar(n / div + '0');
		n %= div;
		div /= 10;
	}
	_putchar(last + '0');
}

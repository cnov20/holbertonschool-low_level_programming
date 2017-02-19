#include "holberton.h"

/**
 * print_number - prints integer of any size - using only _putchar function
 * @n: integer given, to be printed
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n < 0 && n <= -9)
	{
		_putchar(n + '0');
	}
	else if (n < 0 && n <= -99)
	{
		_putchar(n);
	}
	else if (n < 0 && n <= -999)
	{
		_putchar(n / 100 % 10  + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 0 && n <= 9)
	{
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 99 && n <= 999)
	{
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 999)
	{
		_putchar(n / 1000 + '0');
		_putchar(n / 100 % 10 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}

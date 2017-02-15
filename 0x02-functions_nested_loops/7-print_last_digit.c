#include "holberton.h"

/**
 * print_last_digit - prints last digit of given integer
 * @r - integer to be returned last digit of
 *
 * Return: value of last digit of given int
 */


int print_last_digit(int r)
{
	int last;

	last = r % 10;

	if (r < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');
	return (last);
}

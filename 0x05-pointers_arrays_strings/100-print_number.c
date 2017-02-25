#include "holberton.h"

/**
 * print_number - function prints an integer regardless of sign and size
 * @n: integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{


	int b, div, length, last;

/* Ues modulus operator to find last digit */
	last = n % 10;

/* if last digit is negative conver to positive and print with '-' */
	if (last < 0)
	{
		last *= -1;
		_putchar('-');
	}

/* divide integer by 10 in order to remove last digit
 * which will be added back onto integer at end of program
 */
	n /= 10;

/* If integer is negative, convert it to positive */
	if (n < 0)
	{
		n *= -1;
	}

/* Set integer equal to temp/placeholder variable (b)
 * Set length equal to zero, use this to find number
 * of digits of integer (n)
 * Set div equal to 1 in order to increase divisor
 * in multiples of 10
 */
	b = n;
	length = 0;
	div = 1;

/* Crete while loop to iterate through all digits of integer */

	while (b > 0)
	{
		length += 1;
		div *= 10;
		b /= 10;
	}

	div /= 10;

	while (length >= 1)
	{
		_putchar(n / div + '0');
		n %= div;
		div /= 10;
		length--;
	}

	_putchar(last + '0');
}

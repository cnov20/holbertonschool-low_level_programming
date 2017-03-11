#include "holberton.h"
/**
 * print_binary - converts an integer to binary and prints it
 * @n: integer to be converted to binary and printe to std out
 *
 * Return: binary number converted to unsigned int
 */
void print_binary(unsigned long int n)
{
	int i;
	bool flag = false;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			flag = true;
		}
		else if (flag == true)
		{
			_putchar('0');
		}
	}
}

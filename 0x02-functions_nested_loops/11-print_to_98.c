#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - prints numbers either above or below 98, ending with 98
 * @n: integer to be printed
 *
 */


void print_to_98(int n)
{

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}

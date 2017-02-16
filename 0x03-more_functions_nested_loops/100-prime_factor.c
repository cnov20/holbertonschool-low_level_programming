#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - entry point of program
 *
 *
 * Return: 0
 */

int main(void)
{
	unsigned long n = 612852475143;

	while (n > 3)
	{
		n /= 3;
		printf("%lu\n", n);

	}

	return (0);
}

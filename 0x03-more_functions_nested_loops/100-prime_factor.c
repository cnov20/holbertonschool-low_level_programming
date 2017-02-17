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
	unsigned long i = 3;

	while (n > i)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
		else
		{
			i++;
		}

	}
	printf("%lu\n", i);

	return (0);
}

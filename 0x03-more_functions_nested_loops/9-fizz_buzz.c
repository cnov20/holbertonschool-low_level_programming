#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of program
 *
 * Return: 0 - success - always
 */

int main(void)

{
	unsigned char i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else if (i % 15 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}

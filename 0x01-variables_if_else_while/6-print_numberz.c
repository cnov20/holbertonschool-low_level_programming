#include <stdio.h>

/**
 * main - entry point of program
 *
 * for loop - iterate through base 10 numbers - using ASCII conversion
 * putchar - prints characters to std out, and prints newline outside for loop
 *
 * Return: (0) - always - success
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	putchar('\n');

	return (0);
}

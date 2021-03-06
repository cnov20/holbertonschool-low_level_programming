#include <stdio.h>

/**
 * main - entry point of program
 *
 * while loop - iterate through base hexadecimal
 *
 * putchar - print characters and new lines
 *
 * Return: (0) - always - success
 *
 */

int main(void)
{
	int i = 48;
	int j = 97;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	while (j < 103)
	{
		putchar(j);
		j++;
	}

	putchar('\n');
	return (0);
}

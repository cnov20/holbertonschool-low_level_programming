#include <stdio.h>

/**
 * main - entry point of program
 *
 * for loop - iterate through alphabet, in reverse
 *
 * putchar - puts single character to standard output
 *
 * Return: (0) - always - success
 *
 */


int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}

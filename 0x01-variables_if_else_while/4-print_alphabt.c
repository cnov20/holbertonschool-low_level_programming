#include <stdio.h>

/**
 * main - entry point of program
 *
 * for loop - iterate through alphabet
 *
 * putchar - puts single character to standard output
 *
 * Return: (0) - always - success
 *
 */


int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - entry point of program
 *
 * for loop - iterate through alphabet in lowercase, then again in uppercase
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
		putchar(ch);
	}

	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}

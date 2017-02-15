#include <stdio.h>

/**
 * main - entry point of program
 *
 * putchar - prints the alphabet, lowercase
 *
 * Return: 0 - Always - Success
 *
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);

}

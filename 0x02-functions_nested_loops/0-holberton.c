#include "holberton.h"

/**
 * main - entry point of program
 *
 * Return: 0 - always - success
 */

int main(void)
{
	char c[] = "Holberton";
	int i = 0;

	while (i < 10)
	{
		_putchar(c[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}

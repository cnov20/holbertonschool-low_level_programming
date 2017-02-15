#include "holberton.h"
/**
 * main - entry point of program
 * _putchar - writes the character c to stdout
 *
 * Return: 0 - always - success
 * On error, -1 is returned, and errno is set appropriately.
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

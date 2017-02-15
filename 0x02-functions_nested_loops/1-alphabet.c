#include "holberton.h"

/**
 * print_alphabet - prints alphabet to standard output
 *
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 27)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
}

#include "holberton.h"

/**
 * print_alphabet - Entry point
 *
 * Return: void
 */

void print_alphabet(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

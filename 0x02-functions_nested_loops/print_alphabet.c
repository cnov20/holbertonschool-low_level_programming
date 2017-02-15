#include <unistd.h>
#include "holberton.h"
/**
 * print_alphabet - prints alphabet to standard output
 *
 *
 * On error, -1 is returned, and errno is set appropriately.
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

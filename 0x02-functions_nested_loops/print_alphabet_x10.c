#include "holberton.h"
/**
 * print_alphabet_x10 - writes the alphabet to standard output
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int j;
		while (i < 10)
		{
			j = 0;
			while (j < 27)
			{
				_putchar(ch[j]);
				j++;
			}

		   _putchar('\n');
		   i++;
		}
}

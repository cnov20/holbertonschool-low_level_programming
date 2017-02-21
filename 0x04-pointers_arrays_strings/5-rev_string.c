#include "holberton.h"

/**
 * print_rev - prints string in reverse, followed by new line to std out
 * @s: string to be printed, with new line, to std out
 *
 * Return: (0)
 */

void rev_string(char *s)
{
        int i = 0;

        while (i < *s)
        {
		print_rev(s);
		s++;
        }

        _putchar('\n');
}

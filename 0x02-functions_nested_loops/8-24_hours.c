#include "holberton.h"

/**
 * jack_bauer - print every single minute of every single hour for Jack Bauer
 *
 *
 */
void jack_bauer(void)
{
	int i = 0;
	int j;

	while (i < 24)
	{
		j = 0;

		while (j < 60)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}

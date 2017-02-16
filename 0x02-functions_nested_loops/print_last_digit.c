#include "holberton.h"

int print_last_digit(int r)
{
	int last;
	last = r % 10;

	if (r < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');
	return(last);
}

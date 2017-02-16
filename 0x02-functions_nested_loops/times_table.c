#include "holberton.h"

void times_table(void)
{
	int i = 0;
	int j;
	int result;

	while (i < 10)
	{
		j = 1;
		while (j < 10)
		{
			result = i * j;
		       _putchar(result);
		       j++;
		}
		_putchar('\n');
		i++;
	}
}

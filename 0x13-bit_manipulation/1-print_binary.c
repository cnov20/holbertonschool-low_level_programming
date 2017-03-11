#include "holberton.h"
/**
 * binary_to_uint - coverts a binary number to an unsigned integer
 * @b: pointer to string of 0 and 1 characters
 *
 * Return: binary number converted to unsigned int
 */
void print_binary(unsigned long int n)
{

	unsigned long int itob;
	unsigned int i = 0;

	itob = n;

       	if (itob == 0)
       	{
       		_putchar('0');
       	}
	while (itob > 0)
	{
		if ((itob & n) == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}

	       	itob >>= 1;
		i--;
       	}
}

#include "holberton.h"
/**
 * flip_bits - returns number of bits needed to flip from one num to othe other
 * @n: first number given
 * @m: second number given
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff;
	unsigned int num_bits = 0;
	unsigned int index;
	unsigned int i;

	index = sizeof(n) * 8 - 1;

	i = 0;
	while (i <= index)
	{
		diff = (n ^ m) >> i & 1;
		if (diff)
		{
			num_bits += 1;
		}
		i++;
	}
	return (num_bits);

}

#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer to be returned
 * @index: index of bit to be returned
 *
 * Return: value of bit at given index or -1 upon failure
 */
int get_bit(unsigned long int n, unsigned int index)
{

	unsigned int i = 0;

	if (!n)
		return (-1);

	while (index)
	{
		index = index >> 1;

		i++;
	}

	return (i);
}

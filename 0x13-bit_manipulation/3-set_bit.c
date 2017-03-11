#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to number given
 * @index: index of bit to be set
 *
 * Return: value of bit at given index or -1 upon failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > sizeof(n) * 8 - 1)
		return (-1);

	if (*n |= 1 << index)
	{
		return (1);
	}

	return (0);

}

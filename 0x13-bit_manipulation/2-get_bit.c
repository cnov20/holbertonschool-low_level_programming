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

	if (index > sizeof(n) * 8 - 1)
		return (-1);

	if (n >> index & 1)
	{
		return (1);
	}

	return (0);

}

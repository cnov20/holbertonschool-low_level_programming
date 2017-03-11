#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to number given
 * @index: index of bit to be set
 *
 * Return: 1 if success or -1 upon failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > sizeof(n) * 8 - 1)
		return (-1);

	*n &= ~(1 << index);
	return (1);

}

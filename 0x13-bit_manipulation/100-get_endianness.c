#include "holberton.h"
/**
 * get_endianness - checks the endianness (way of storing multibyte data tyoes)
 *
 * Return: 0 - if big endian or 1 - if little endian
 */
int get_endianness(void)
{

	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
	{
		return (1);
	}

	return (0);
}

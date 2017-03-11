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
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}

	return (0);
}

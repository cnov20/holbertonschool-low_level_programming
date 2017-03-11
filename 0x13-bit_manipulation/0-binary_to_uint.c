#include "holberton.h"
/**
 * int_binary_to_uint - coverts a binary number to an unsigned integer
 * @b: pointer to string of 0 and 1 characters
 *
 * Return: binary number converted to unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int i;
	unsigned int btoi;

	if (b == NULL)
	{
		return (0);
	}

	i = 0;
	btoi = 0;
	while (b[i])
	{
		btoi <<= 1;

		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if(b[i] == '1')
		{
			btoi += 1;
		}

		i++;
	}

	return (btoi);
}

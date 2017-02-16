#include "holberton.h"

/**
 * _abs - calculate and return abasolute value of integer
 * @r: integer to be converted to abs value
 *
 * Return: absolute value of int
 *
 */

int _abs(int r)
{
	if (r > 0)
	{
		return (r * 1);
	}
	else if (r < 0)
	{
		return (r * -1);
	}
	else
	{
		return (0);
	}
}

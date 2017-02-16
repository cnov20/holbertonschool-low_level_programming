#include "holberton.h"

/**
 * _isdigit - checks to see if character input is numeric.
 * @c: character to iterate through
 *
 * Return: 1 (success) - 0 (fail)
 */

int _isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

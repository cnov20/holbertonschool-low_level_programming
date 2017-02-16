#include "holberton.h"

/**
 * _isalpha - checks to see if character input is alpha.
 * @c: character to iterate through
 *
 * Return: 1 (success) - 0 (fail)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

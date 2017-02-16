#include "holberton.h"

/**
 * _isupper - check character to see if an upper or lower -case
 * @c: character to check
 *
 * Return: 1 - if successful - 0 - if unsucessful
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

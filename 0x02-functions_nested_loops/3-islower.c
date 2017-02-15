#include "holberton.h"

#include "holberton.h"

/**
 * _islower - chech character to see if an upper or lower -case
 * @c: character to check
 *
 * Return: 1 - if successful - 0 - if unsucessful
 */

int _islower(int c) {

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else {
		return(0);
	}
}

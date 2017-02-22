#include "holberton.h"

/**
 * _strcpy -
 *@dest:
 *@src:
 *
 * Return:
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int n;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (i = 0 ; i < n; i++)
		dest[i] = '\0';

	return dest;
}

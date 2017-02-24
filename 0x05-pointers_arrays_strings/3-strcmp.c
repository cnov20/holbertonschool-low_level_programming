#include "holberton.h"

/**
 * _strcmp- compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int difference;
	difference = *s1 - *s2;

	return (difference);
}

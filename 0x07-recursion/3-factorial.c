#include "holberton.h"

/**
 * _strlen_recursion - function that recursively returns the length of a string
 *
 * @s: string to be counted
 *
 * Return: string length
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{

		return (n  * factorial(n - 1));
	}
}

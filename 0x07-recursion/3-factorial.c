#include "holberton.h"

/**
 * factorial - function that recursively returns the factorial of a number
 *
 * @n: number to find factorial of
 *
 * Return: factorial, -1, 1, depending on value of n
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

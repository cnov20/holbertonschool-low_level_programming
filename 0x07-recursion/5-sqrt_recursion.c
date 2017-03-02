#include "holberton.h"

/**
 * _sqrt_recursion - function that recursively returns square root of number
 * @n: number to return square root of
 * Return: natural square root or -1, depending on value of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{

		return (helper_recursion(0, n));
	}
}

/**
 * * helper_recursion - helper function that determines value to be passed
 * @x: number to test again integer (n)
 * @n: number to return to sqrt function
 *
 * Return: square root of (x)
 */

int helper_recursion(int x, int n)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	else
	{
		x += 1;
		return (helper_recursion(x, n));
	}

}

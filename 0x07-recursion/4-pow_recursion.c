#include "holberton.h"

/**
 * _pow_recursion - function that recursively returns the value of
 *
 * @x: number to raise exponentially
 * @y: power to raise base(x) to
 *
 * Return: factorial, -1, 1, depending on value of n
 */

int _pow_recursion(int x, int y)
{

	int NaN = NaN;

	if (x < 0)
	{
		return (NaN);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (y == 0 || x == 0 || x == 1)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{

		return (x * _pow_recursion(x, y - 1));
	}
}

#include "holberton.h"

/**
 * is_prime_number - function that returns 1 if a number is prime, 0 if not
 * @n: integer that is input
 *
 * Return: 1 or 0, depending on given integer (n)
 */

int is_prime_number(int n)
{
	if (n == 0 || n == -1 || n == 1 || n % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (optimus_prime(2, n));
	}
}

/**
 * optimus_prime - helper function to determine prime number
 * @x: number to compare against integer (n)
 * @n: integer that is input
 *
 * Return: 1 if prime number, 0 if number is not prime
 */

int optimus_prime(int x, int n)
{
	if (n % x == 0 && n == x)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	else
	{
		return (optimus_prime(x + 1, n));
	}
}

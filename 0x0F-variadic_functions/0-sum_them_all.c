#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all of its parameters
 * @n: count of parameters given
 *
 * Return: sum (variable) - or 0 - if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums_given;
	unsigned int i;
	unsigned int sum = 0;


	va_start(nums_given, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums_given, unsigned int);
	}

	va_end(nums_given);

	return (sum);
}

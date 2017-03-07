#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all of its parameters
 * @n: count of parameters given
 *
 * Return: sum (variable) - or 0 - if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	/* declaring variable of nums passed to function, with variable type*/
	va_list nums_given;
	unsigned int i;
	unsigned int sum = 0;

	/*initializing nums_given so that it will store all values after n*/
	va_start(nums_given, n);

	/* if 0 arguments are given, return zero and don't enter for loop*/
	if (n == 0)
	{
		return (0);
	}

	/*Loop through number of arguments passed to function via command line
	 * and add them to sum variable - return sum
	 */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums_given, unsigned int);
	}

	va_end(nums_given);

	return (sum);
}

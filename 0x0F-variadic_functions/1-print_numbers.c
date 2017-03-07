#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @n: count of parameters (numbers) given
 *
 * Return: none - void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* declaring variable of nums passed to function, with variable type*/
	va_list nums_given;
	unsigned int i;
	unsigned int num = 0;

	/*initializing nums_given so that it will store all values after n*/
	va_start(nums_given, n);

	/*Loop through number of arguments passed to function via command line
	 * and add them to sum variable - return sum
	 */
	for (i = 0; i < n; i++)
	{
		num = va_arg(nums_given, unsigned int);
		if (separator == NULL || i == n - 1)
		{
			printf("%d", num);
		}
		else
		{
			printf("%d%s", num, separator);
		}
 	}

	va_end(nums_given);

	printf("\n");


}

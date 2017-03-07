#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string that seprates given numbers
 * @n: count of parameters (numbers) given
 *
 * Return: none - void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums_given;
	unsigned int i;
	unsigned int num = 0;

	va_start(nums_given, n);

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

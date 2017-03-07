#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @n: count of parameters (strings) given
 * @separator: string to be printed betweens strings that are passed in
 *
 * Return: none - void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		printf("");
	}

	if (n == NULL)
	{
		printf("(nil)");
	}

	printf("\n");

}

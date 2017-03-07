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

	/* declaring variable of nums passed to function, with variable type*/
	va_list strings_given;
	char *string;
	unsigned int i;

	/*initializing nums_given so that it will store all values after n*/
	va_start(strings_given, n);

	/*Loop through number of arguments passed to function via command line
	 * and add them to sum variable - return sum
	 */
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings_given, char*);

		if (string == NULL && i == n - 1)
		{
			printf("%s", "(nil)");
		}
		else if (string == NULL)
		{
			printf("%s%s", "(nil)", separator);
		}
		else if (separator == NULL || i == n - 1)
		{
			printf("%s", string);
		}

		else
		{
			printf("%s%s", string, separator);
		}
	}

	va_end(strings_given);

	printf("\n");
}

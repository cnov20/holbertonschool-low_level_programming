#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing - void
 */

void print_all(const char * const format, ...)
{
	/* declaring variable of nums passed to function, with variable type*/
	va_list all_args;

	const char *p;
	char *s;
	char c;
	int i;
	float f;

	/*initializing all_args  so that it will store values passed in*/
	va_start(all_args, format);

	p = format;
	while (*p != '\0')
	{
		switch (*p++)
		{
		case 's':
			s = va_arg(all_args, char *);
			printf("%s", s);
			break;
		case 'i':
			i = va_arg(all_args, int);
			printf("%d", i);
			break;
		case 'f':
			f = va_arg(all_args, double);
			printf("%f", f);
			break;
		case 'c':
			c = va_arg(all_args, int);
			putchar(c);
			break;
		}
	}
	va_end(all_args);
	printf("\n");
}

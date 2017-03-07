#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing - void
 */

void print_all(const char * const format, ...)
{
	va_list all_args; const char *p; char *s;
	char * separator = ", "; unsigned int flag = 0;

	va_start(all_args, format); p = format;
	while (format != NULL && *p != '\0')
	{
		flag = 1;
		switch (*p)
		{
		case 'c':
			printf("%c", va_arg(all_args, int));
			break;
		case 'i':
			printf("%d", va_arg(all_args, int));
			break;
		case 'f':
			printf("%f", va_arg(all_args, double));
			break;
		case 's':
			s = va_arg(all_args, char *);
			if (s == NULL)
			{
				s = "(nil)";
			}
			printf("%s", s);
			break;
		default:
			flag = 0;
			break;
	       }

		if (flag == 1 && (p + 1) != '\0')
			printf("%s", separator);
		p++;
	}
	va_end(all_args);
	printf("\n");
}

#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing - void
 */

void print_all(const char * const format, ...)
{
	va_list all_args; char *s; unsigned int i = 0;
	char *separator = ", "; unsigned int flag;

	va_start(all_args, format);
	while (format != NULL && format[i] != '\0')
	{
		flag = 1;
		switch (format[i])
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

		if (flag == 1 && format[i + 1] != '\0')
			printf("%s", separator);
		i++;
	}
	va_end(all_args);
	printf("\n");
}

#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @f: pointer to print function
 * @name: letter to be printed
 *
 * Return - void - nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || *f == NULL)
	{
		return;
	}
	else
	{
		(f)(name);
	}
}

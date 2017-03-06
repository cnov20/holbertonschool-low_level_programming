#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct func to perform operation chosen by user
 * @s: operator passed as argument to the program
 *
 * Return: two integers
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	if (s != '+' || s != '-' || s != '*' || s != '/' || s != '%')
	{
		return (NULL);
	}

}

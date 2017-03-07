#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - selects the correct func to perform operation chosen by user
 * @s: operator passed as argument to the program
 *
 * Return: two integers
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	printf("Error");
	exit(99);
}

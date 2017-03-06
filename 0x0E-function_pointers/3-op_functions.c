#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - function calculates sum of a and b parameters
 * @a: integer value, given as argument to function
 * @b: integer value, given as argument to function
 *
 * Return: int - sum of a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	return (a / b);
}
int op_mod(int a, int b)
{
	return (a % b);
}

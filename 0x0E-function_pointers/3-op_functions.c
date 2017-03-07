#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - function calculates sum of a and b parameters
 * @a: first integer value, given as argument to function
 * @b: first value, given as argument to function
 *
 * Return: int - sum of a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts and returnss difference of a and b
 * @a: first integer
 * @b: second integer
 * Return: int - diff of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies and returns product of a and b
 * @a: first int
 * @b: second int
 * Return: int - product of a nd b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides and returns quotient of a and b
 * @a: first int
 * @b: second int
 * Return: int - quotient of and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - divides and returns remainer of a divided by b
 * @a: first int
 * @b: second int
 * Return: int - remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

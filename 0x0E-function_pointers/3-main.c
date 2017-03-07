#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the results of calculation functions found in other files
 * @argc: argument count
 * @argv: argument vector (value)
 *
 * Return: 0 - success
 */

int main(int argc, char **argv[])
{
	int num1, num2, total;

	if (argc != 4)
	{
		printf("Error/n");
		exit(98);
	}
	if (argv[3] == 0 && (argv[2] == "/" || argv[2] == "%"))
	{
		printf("Error/n");
		exit(100);
	}

	total = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));

	printf("%d/n", total);

	return (0);
}

#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the results of calculation functions found in other files
 *
 *
 * Return: 0 - success
 */

int main(void)
{
	if (argc != 4)
	{
		printf("Error/n");
		exit (98);
	}
	if (argv[4] == 0 && (s = '/' || s = '%'))
	{
		printf("Error/n");
		exit (99);
	}
	if (s != '+' || s != '-' || s != '*' || s != '/' || s != '%')
        {
                printf("Error/n");
		exit (100);
        }


	return (0);
}

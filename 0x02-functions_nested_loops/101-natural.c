#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - entry point of program
 *
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}

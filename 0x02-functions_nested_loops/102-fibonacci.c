#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - print fibonacci numbers
 *
 * Return: 0 - always - success
 */

int main(void)
{
	unsigned long num1 = 0;
	unsigned long num2 = num1 + 1;
	unsigned long result;
	char i;

	for (i = 0; i <= 50; i++)
	{
		result = num1 + num2;
		num1 = num2;
		num2 = result;
		printf("%lu, \n",result);
	}

}

#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

int main(void)
{
       	int num1 = 1;
	int num2 = 2;
	int result;
	int i;
	int n = 50;

	for (i = 0; i <= n; i++)
	{
		result = num1 + num2;
		num1 = num2;
		num2 = result;
		printf("%d\n", result);
	}

}

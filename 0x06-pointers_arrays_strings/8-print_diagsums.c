#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints a hessboard
 * @a: array to be iterated through
 * @size: size of array
 *
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum = 0;
	int reverse_sum = 0;

	for (i = 0; i < size * size; i+= (size + 1))
	{
		sum += a[i];
	}

	for (j= size - 1; j < (size * size) - (size - 1); j+= (size - 1))
	{
		reverse_sum += a[j];
	}

	printf("%d, %d\n", sum, reverse_sum);

}

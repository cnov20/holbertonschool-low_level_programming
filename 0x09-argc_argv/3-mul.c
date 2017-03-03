#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies numbers passed as arguments on command line
 * @argc: argument count
 * @argv: argument vector (value at given index)
 *
 * Return: name of file, character string
 */

int main(int argc, char **argv)
{
	int i;
	int product = 1;

	if (argc <= 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}

	}

	printf("%d\n", product);
	return (0);
}

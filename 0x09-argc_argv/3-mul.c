#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints name of file
 * @argc: argument count
 * @argv: argument vector (value at given index)
 *
 * Return: name of file, character string
 */

int main(int argc, char **argv)
{
	int i;
	int product = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
		printf("%d\n", product);
	}
	else
	{
		printf("%s\n", "Error");
		return(1);
	}

	return (0);
}

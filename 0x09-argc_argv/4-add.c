#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

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
	char *endptr;
	unsigned int sum = 0;
	unsigned int base = 10;

	if (argc)
	{
		for (i = 1; i < argc; i++)
		{
			strtol(argv[i], &endptr, base);

			if (*endptr)
			{
				printf("%s\n", "Error");
				return (1);
			}
			else
			{
				sum += strtol(argv[i], &endptr, base);
			}

		}

		printf("%d\n", sum);

	}

	return (0);
}

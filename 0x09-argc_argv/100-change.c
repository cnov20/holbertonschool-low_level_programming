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
	int result;
	char *endptr;
	unsigned int sum;
	unsigned int base = 10;

	if (argc != 1)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argv[i] < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum = strtol(argv[i], &endptr, base);

			if (*endptr)
			{
				printf("%s\n", "Error");
				return (1);
			}
			else
			{
				result += sum;
			}

		}

		printf("%d\n", result);
	}

	return (0);
}

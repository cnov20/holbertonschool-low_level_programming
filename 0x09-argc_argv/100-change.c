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
	int num;
	int change;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num = atoi(argv[1]);

	change = 0;
	while (num > 0)
	{
		if (num >= 25)
		{
			num -= 25;
		}
		else if (num >= 10)
		{
			num -= 10;
		}
		else if (num >= 5)
		{
			num -= 5;
		}
		else if (num >= 2)
		{
			num -= 2;
		}
		else
		{
			num -= 1;
		}
		change++;
	}

	printf("%d\n", change);
	return (0);
}

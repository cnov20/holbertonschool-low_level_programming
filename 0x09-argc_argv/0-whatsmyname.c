#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints name of file
 * @argc: argument count
 * @argv: argument vector (value at given index)
 *
 * Return: name of file, characterstring
 */

int main(int argc, char **argv)
{
	if (argc)
	{
		printf("%s\n", *argv);
		exit(EXIT_SUCCESS);
	}
	return (0);
}

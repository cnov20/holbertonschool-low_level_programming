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
	if (**argv)
	{
		argc--;
		printf("%d\n", argc);
		exit(EXIT_SUCCESS);
	}
	return (0);
}

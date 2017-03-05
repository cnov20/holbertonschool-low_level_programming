#include "holberton.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all arguments for a program
 * @ac: argument count to be concatenated
 * @av: argument vector to be concatenated
 *
 * Return: NULL if failing, pointer to concatenated string if successful
 */

char *argstostr(int ac, char **av)
{
	char *new;
	int i, j, k;
	unsigned int total_args = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_args += _strlen(av[i]) + 1;
	}

	new = malloc(total_args + 1 * sizeof(char));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	i = 0;	k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			new[k] = av[i][j];
			j++;
			k++;
		}
		new[k] = '\n';
		i++;
		k++;

	}

	return (new);
}

/**
 * _strlen - takes string and calculates length
 * @s: string taken in to find length of
 *
 * Return: i, string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

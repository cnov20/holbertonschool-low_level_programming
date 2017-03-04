#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a two dimensional array of integers
 * @width:
 * height:
 *
 * Return: Pointer to 2 dimensional array on success, NULL on failure
 */

int **alloc_grid(int width, int height)
{

	int **grid;
	int i;
	int j;

	int size = width * height;

	grid = malloc(sizeof(int) * size);

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	i = 0;
	while (i < width)
	{
		grid[i] = malloc(sizeof(int) * size);

		j = 0;
		while(j < height)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a two dimensional array of integers
 * @width: width of grid
 * @height: length of grid
 *
 * Return: Pointer to 2 dimensional array on success, NULL on failure
 */

int **alloc_grid(int width, int height)
{

	int **grid;
	int i;
	int j;

	int size = width * height;

	grid = malloc(size * sizeof(int));

	if (grid == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
		free(grid);
	}

	i = 0;
	while (i < width)
	{
		grid[i] = malloc(sizeof(int));

		j = 0;
		while (j < height)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

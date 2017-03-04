#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - returns a pointer to a two dimensional array of integers
 * @grid: size of grid - height * width
 * @height: height of grid
 *
 * Return: Pointer to 2 dimensional array on success, NULL on failure
 */

void free_grid(int **grid, int height)
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

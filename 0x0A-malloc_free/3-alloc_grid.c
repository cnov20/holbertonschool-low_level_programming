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

	if (width <= 0 || height <= 0)
	{
		return (NULL);

	}
	grid = malloc(height * sizeof(grid));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}

			free(grid);
		}
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

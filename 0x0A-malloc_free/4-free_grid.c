#include "holberton.h"
#include <stdlib.h>


/**
 * free_grid - frees memory from a two dimensional array of integers
 * @grid: width of grid
 * @height: height of grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

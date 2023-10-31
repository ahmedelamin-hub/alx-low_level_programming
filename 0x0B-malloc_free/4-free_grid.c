#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: address of the two dimensional grid
 * @height: width of grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}

#include "main.h"

/**
 * alloc_grid - a function that gives two dimensional array
 * @width: coloumns
 * @height: rows
 * Return: gives array
 */

int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int **output;

	if (width <= 0 || height <= 0)
		return (NULL);

	output = malloc(sizeof(int *) * height);

	if (output == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		output[x] = malloc(sizeof(int) * width);

		if (output[x] == NULL)
		{
			free(output);
			for (y = 0; y <= height; y++)
				free(output[y]);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			output[x][y] = 0;
	}
	return (output);
}

#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - create a 2d integer grid using malloc.
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		grid[i] = malloc(width * sizeof(*grid));
	}

	for (i = 0 ; i < height ; i++)
	{
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}

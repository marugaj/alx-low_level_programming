#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - This fres a grid of integers
 * @grid: The address of the two dimensional dris
 * @height: The height of the grid
 * Return: This returns nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - This function returns pointer to an array
 * @width: This is width of the grid
 * @height: This is the height of the grid
 * Return: An integer value
 */

int **alloc_grid(int width, int height)
{
	int g, b, m, d;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (g = 0; g < height; g++)
	{
		a[g] = malloc(sizeof(int) * width);

		if (a[g] == NULL)
		{
			for (b = g; b >= 0; b--)
			{
				free(a[b]);
			}

			free(a);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (d = 0; d < width; d++)
		{
			a[m][d] = 0;
		}
	}

	return (a);
}

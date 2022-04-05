#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free an array of array
 * @grid - the array of array
 * @height: the number of array rows
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <= height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

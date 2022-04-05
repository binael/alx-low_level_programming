#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * alloc_grid - create an integer array of array
 * @width: integer width of the array
 * @height: integer height of the array
 *
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	array = malloc(heigth * sizeof(int *));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; i < width; j++)
			array[i][j] = 0;
	}

	return (array);
}

#include "main.h"

/**
 * array_range - creates and array of max min value
 * @min: minimum value
 * @max: int mqx value
 *
 * Return: array
 */

int *array_range(int min, int max)
{
	int i;
	int *array;

	int j = 0;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		array[j] = i;
		j += 1;
	}

	return (array);
}

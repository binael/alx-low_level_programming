#include "search_algos.h"

/**
 * linear_search - Implements the search algorithm using linear search
 * @array: the array to searh for the target
 * @size: the number (length) of elements in the array
 * @value: the value to search for
 *
 * Return: -1 for failure or value for success
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return ((int)i);
		}
	}

	return (-1);
}

#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: given array
 * @size: int array size
 * @cmp: function pointer which is the comparator
 *
 * Return: returns the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}


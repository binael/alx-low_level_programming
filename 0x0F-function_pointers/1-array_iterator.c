#include "function_pointers.h"

/**
 * array_iterator - iterates an array
 * @array: given array
 * @size: size of array
 * @action: pointer to a function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t b;

	if (action == NULL || array == NULL || size <= 0)
		return;
	for (b = 0; b < size; b++)
		action(array[b]);
}

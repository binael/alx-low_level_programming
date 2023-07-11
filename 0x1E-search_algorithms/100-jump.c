#include "search_algos.h"

/**
 * jump_search - Implements jump search algorithm to find a target
 * @array: the array to search
 * @size: the size of the array (length)
 * @value: the target value to search for
 *
 * Return: the index of the target
*/
int jump_search(int *array, size_t size, int value)
{
	size_t root, max, min;

	if (array == NULL || size < 1)
	{
		return (-1);
	}

	root = (size_t)sqrt((double)size);
	max = min = 0;

	while (max < size)
	{
		if (array[max] >= value)
		{
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", max, array[max]);
		max = max + root;
	}
	min = max - root;
	if (min <= 0)
	{
		min = 0;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", min, max);

	if (max >= size)
	{
		max = size - 1;
	}
	for (min = min; min <= max; min++)
	{
		printf("Value checked array[%ld] = [%d]\n", min, array[min]);

		if (array[min] == value)
			return (min);
	}
	return (-1);
}

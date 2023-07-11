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
		return (-1);

	root =  (size_t)sqrt(size);
	max = min = 0;

	while (root)
	{
		printf("Value checked array[%ld] = [%d]\n", max, array[max]);
		if (array[max] >= value || max >= size)
		{
			if (max == 0 && array[max] > value)
				return (-1);
			else if (max == 0)
				return (max);

			min = max - root;
			printf("Value found between indexes [%ld] and [%ld]\n", min, max);
			break;
		}
		max = max + root;
	}
	min = max - root;

	if (max >= size)
		max = size - 1;

	for (min = min; min <= max; min++)
	{
		printf("Value checked array[%ld] = [%d]\n", min, array[min]);

		if (array[min] == value)
			return (min);
	}
	return (-1);
}

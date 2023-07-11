#include "search_algos.h"

/**
 * interpolation_search - Algorithm used for array search
 * @array: the array to search for the target value
 * @size: the size of the array (length)
 * @value: the target value to search for
 *
 * Return: integer index for the target value in array or -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, l, r;

	if (array == NULL || size < 1)
	{
		return (-1);
	}

	l = 0;
	r = size - 1;

	while (l < r)
	{
		pos = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));

		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
		else if (array[pos] > value)
		{
			r = pos - 1;
		}
		else
		{
			l = pos + 1;
		}
	}
	return (-1);
}

#include "search_algos.h"

/**
 * exponential_search - Using Exponential Search algorithm
 * @array: the array to search for the target
 * @size: the size of the array (array length)
 * @value: the target value to search for
 *
 * Return: the index of the target or -1 if failure
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t exp, low;
	int result;

	if (array == NULL || size < 1)
	{
		return (-1);
	}
	exp = 1;

	while (exp < size)
	{
		if (array[exp] >= value)
		{
			break;
		}

		printf("Value checked array[%ld] = [%d]\n", exp, array[exp]);
		exp = exp * 2;
	}

	low = exp / 2;

	if (exp == 1)
	{
		low = 0;
	}
	if (exp >= size)
	{
		exp = size - 1;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", low, exp);

	result = b_search(array, low, exp, value);

	return (result);
}


/**
 * b_search - Implements binary search algorithm on an array
 * @array: The array to search the value from
 * @low: The starting index to consider for the search
 * @high: The highest index to consider for search
 * @value: The value to search for
 *
 * Return: -1 if failure or the index where the value was found
*/
int b_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		print_search_zone(array, low, high);
		mid = (low + high) / 2;

		if (array[mid] == value)
		{
			return ((int)mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return (-1);
}


/**
 * print_search_zone - prints the search zone for array
 * @array: the array to print the elements
 * @low: the index of the beginning of the search zone
 * @high: the index of the end of the search zone
 *
 * Return: void
*/
void print_search_zone(int *array, size_t low, size_t high)
{
	size_t i;

	if (array == NULL)
	{
		return;
	}

	printf("Searching in array: ");

	for (i = low; i <= high; i++)
	{
		if (i > low)
		{
			printf(", ");
		}
		printf("%d", array[i]);
	}
	printf("\n");
}

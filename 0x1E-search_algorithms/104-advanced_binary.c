#include "search_algos.h"

/**
 * advanced_binary - Implements binary search algorithm on an array
 * @array: The array to search the value from
 * @size: The size of the array (length)
 * @value: The integer value to search
 *
 * Return: -1 if failure or the index where the value was found
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t low, high;
	int result;

	if (array == NULL || size < 1)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	result = rec_binary(array, low, high, value);

	return (result);
}


/**
 * rec_binary - recursively implementation of binary search
 * @array: the array to search
 * @low: the starting index for the array
 * @high: the end index for the array search
 * @value: the value to search for
 *
 * Return: -1 for failure or index value for the target
*/
int rec_binary(int *array, size_t low, size_t high, int value)
{
	int result;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}

	if (low > high)
	{
		return (-1);
	}

	mid = (high + low) / 2;
	print_search_zone(array, low, high);

	if (array[mid] == value)
	{
		if ((mid == low) && (array[mid - 1] != value))
		{
			return (mid);
		}
		result = rec_binary(array, low, mid, value);
	}
	else if (array[mid] < value)
	{
		result = rec_binary(array, mid + 1, high, value);
	}
	else
	{
		if (mid == 0)
		{
			return (-1);
		}
		result = rec_binary(array, low, mid - 1, value);
	}

	return (result);
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

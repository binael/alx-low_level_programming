#include "search_algos.h"

/**
 * binary_search - Implements binary search algorithm on an array
 * @array: The array to search the value from
 * @size: The size of the array (length)
 * @value: The integer value to search
 *
 * Return: -1 if failure or the index where the value was found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

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

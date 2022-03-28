#include "main.h"

/**
 * print_array - prints the elements of an array
 * @a: the given array
 * @n: the interger number
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(*(a + i));

		if (i >= 4)
			continue;

		_putchar(',');
		_putchar(32);
	}

	_putchar('\n');
}

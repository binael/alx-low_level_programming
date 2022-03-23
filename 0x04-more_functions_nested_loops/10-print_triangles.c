#include "main.h"

/**
 * print_triangle - prints a triangle with respect to size
 * @size: number showing the size of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (i > 0)
	{
		for (i = size; i >= 1; i--)
		{
			for (j = 1; j < i; j++)
				_putchar('32');

			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

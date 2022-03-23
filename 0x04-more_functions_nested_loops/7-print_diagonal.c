#include "main.h"

/**
 * print_diagonal - prints a diagonal as per number input
 * @n: number showing length of the diagonal
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		_putchar(92);
		_putchar('\n');

		for (i = 2; i <= n; i ++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_times_table - Prints the times table
 * @n: shows the int to print its table
 */
void print_times_table(int n)
{
	int i, j, k;
	int unit, tens;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			unit = k % 10;
			tens = (k - (k % 10)) / 10;

			if (j == 0)
			{
				_putchar('0' + k);
			}
			else
			{
				_putchar(',');
				_putchar(32);

				if (k <= 9)
					_putchar(32);
				if (k >= 10)
					_putchar('0' + tens);
				_putchar('0' + unit);
			}
		}

		_putchar('\n');
	}
}

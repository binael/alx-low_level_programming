#include "main.h"

/**
 * print_times_table - Prints the times table
 * @n: shows the int to print its table
 */
void print_times_table(int n)
{
	int i, j, k;
	int unit, tens, hundred;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (n > 15)
				break;
			k = i * j;
			unit = k % 10;
			tens = (k - unit) / 10;
			hundred = (k - (unit + tens * 10)) / 100;

			if (j == 0)
			{
				_putchar('0' + k);
			}
			else
			{
				_putchar(',');
				_putchar(32);
				_putchar(32);

				if (k <= 9)
					_putchar(32);
				if (k >= 100)
					_putchar('0' + hundred);
				if (k >= 10)
					_putchar('0' + tens);
				_putchar('0' + unit);
			}
		}

		_putchar('\n');
	}
}

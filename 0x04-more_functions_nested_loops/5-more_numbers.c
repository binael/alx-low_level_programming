#include "main.h"

/**
 * more_numbers - prints numbers from 0-14 ten times
 */

void more_numbers(void)
{
	int i, j, tens, unit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			unit = j % 10;
			tens = (j - unit) / 10;

			if (j > 9)
				_putchar('0' + tens);
			_putchar('0' + unit);
		}

		putchar('\n');
	}
}

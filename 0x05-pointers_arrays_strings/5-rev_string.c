#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to ber reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int c1, c2;

	int lenght = 0;
	int boolean = 1;

	while (boolean)
	{
		if (*(s + lenght) == '\0')
		{
			break;
		}

		lenght += 1;
	}

	for (c1 = 0; c1 < lenght; ++c1)
	{
		if (c1 >= lenght)
			break;
		_putchar(*(s + c1));
	}

	_putchar('\n');

	for (c2 = (lenght - 1); c2 >= 0; --c2)
	{
		_putchar(*(s + c2));
	}

	_putchar('\n');
}

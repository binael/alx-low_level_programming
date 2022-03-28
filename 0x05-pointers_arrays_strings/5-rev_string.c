#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to ber reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int c1;
	char *temp;

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
		*(temp + lenght - 1 - c1) = *(s + c1);
	}

	*s = *temp;

	_putchar('\n');
}

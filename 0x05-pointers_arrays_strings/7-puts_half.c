#include "main.h"

/**
 * puts_half - print the last half of a string
 * @str: string given
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;

	while (*(str + i) != '\0')
		i += 1;

	if (((i - 1) % 2) != 0)
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(*(str + j));
		}

		_putchar('\n');
	}
}

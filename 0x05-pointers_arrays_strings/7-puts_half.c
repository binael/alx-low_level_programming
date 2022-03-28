#include "main.h"

/**
 * puts_half - print the last half of a string
 * @str: string given
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, k;

	i = 0;

	while (*(str + i) != '\0')
		i += 1;

	if ((i % 2) == 0)
		j = i / 2;
	else
		j = (i - 1) / 2;

	for (k = j; k < i; k++)
	{
		_putchar(*(str + k));
	}

	_putchar('\n');
}

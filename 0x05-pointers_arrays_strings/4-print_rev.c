#include "main.h"

/**
 * print_rev - find the lenght of a string
 * @s: string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;
	int l;

	while (*s != '\0')
	{
		s = s + 1;
		length += 1;
	}

	l = 1;

	while (l <= length)
	{
		_putchar(*(s - l));
		l += 1;
	}

	_putchar('\n');
}

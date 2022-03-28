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

	l = length;

	while ((s + l) >= s)
	{
		_putchar(*(s + l));
		l -= 1;
	}
}

#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string input
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 1;
	}

	_putchar('\n');
}

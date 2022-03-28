#include "main.h"

/**
 * puts2 - prints every second character, and starts with first
 * @str: string input
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		 i = i + 2;
	}

	_putchar('\n');
}

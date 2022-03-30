#include "main.h"

/**
 * _puts_recursion - mimicks the standard puts function
 * @s: string pointer input
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s+1);
}

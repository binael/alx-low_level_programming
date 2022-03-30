#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: string input
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	{
		len = 0;
		return (len);
	}

	_strlen_recursion(*s + 1);
	len = len + 1;
	return (len);
}

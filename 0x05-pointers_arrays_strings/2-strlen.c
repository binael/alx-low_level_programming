#include "main.h"

/**
 * _strlen - find the lenght of a string
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s == '\0')
	{
		s = s + 1;
		length += 1;
	}

	return (length);
}

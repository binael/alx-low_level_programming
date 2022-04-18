#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: the given string
 * @c: the character to be ssearched
 *
 * Return: NULL if c is not found or the string from c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0, s[i] != '\0' i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}

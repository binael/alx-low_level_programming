#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 (if equal), -1 (if s1 < s2), 1 (if s1 > s2)
 */

int _strcmp(char *s1, char *s2)
{
	char *a = s1;
	char *b = s2;

	while (*a && *a == *b)
	{
		++a;
		++b;
	}

	return (*a - *b);
}

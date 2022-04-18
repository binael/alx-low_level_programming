#include "main.h"

/**
 * _strpbk - searches for any character match in a string
 * @s: given string
 * @accept: the string to check for its letter match
 *
 * Return: NULL if no match and string if matched
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}

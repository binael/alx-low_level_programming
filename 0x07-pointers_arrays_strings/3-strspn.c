#include "main.h"

/**
 * _strspn - Gets the length of prefix substring
 * @s: String where substring will look
 * @accept: the substring
 *
 * Return: length of occurance
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *c = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				i++;
				break;
			}
		}
		if (!(*--accept))
			break;
		accept = c;
	}

	return (i);
}

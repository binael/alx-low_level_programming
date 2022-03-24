#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string
 *
 * Return: dest
 */
 
char *string_toupper(char *s)
{
	int i;
	char j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		j = *(s + i);

		if (j >= 'a' && j <= 'z')
			j += 'A' - 'a';

		*(s + i) = j;
	}

	return (s);
}

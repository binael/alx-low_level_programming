#include "main.h"

/**
 * _strcpy - copy the contents of a string
 * @dest: destination string
 * @src: source
 *
 * Return: the destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + i);

		if (*(src + i) == '\0')
			break;

		i += 1;
	}

	return (dest);
}

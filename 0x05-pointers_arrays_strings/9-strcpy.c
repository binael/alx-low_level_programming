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

	while (*(src + i) != EOF)
	{
		*(dest + i) = *(src + i);
		i += 1;
	}

	return (dest);
}

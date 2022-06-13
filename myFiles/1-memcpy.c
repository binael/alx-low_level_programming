#include "main.h"

/**
 * _memcpy - copy to a memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: integer number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		*(dest + j) = *(src + j);

	return (dest);
}

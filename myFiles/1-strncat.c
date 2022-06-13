#include "main.h"

/**
 * _strncat - Function that concatenates string
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: dest-value
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_src = 0;
	int len_dest = 0;

	while (*(dest + len_dest) != '\0')
		len_dest++;

	while (len_src < n)
	{
		*(dest + len_dest) = *(src + len_src);

		if (*(src + len_src) == '\0')
			break;

		len_src++;
		len_dest++;
	}

	return (dest);
}

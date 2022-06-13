#include "main.h"

/**
 * _strcat - Function that concatenates string
 * @dest: destination
 * @src: source
 *
 * Return: dest-value
 */

char *_strcat(char *dest, char *src)
{
	int len_src = 0;
	int len_dest = 0;
	int t = 1;

	while (*(dest + len_dest) != '\0')
		len_dest++;

	while (t)
	{
		*(dest + len_dest) = *(src + len_src);

		if (*(src + len_src) == '\0')
			break;

		len_src++;
		len_dest++;
	}

	return (dest);
}

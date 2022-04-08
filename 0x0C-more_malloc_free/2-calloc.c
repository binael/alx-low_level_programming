#include "main.h"

/**
 * _calloc - using malloc to generate calloc
 * @nmemb: number of elements
 * @size: size of the array
 *
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cal;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	cal = malloc(nmemb * size);
	if (call == NULL)
		return (NULL);

	memset(cal, 0, (nmemb * size));

	return (call);
}

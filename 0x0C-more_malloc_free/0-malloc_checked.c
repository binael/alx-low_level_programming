#include "main.h"

/**
 * malloc_checked - allocate memory and check if it exists
 * @b: unsigne int
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *pointer;

	pointer = malloc(b * sizeof(unsigned int));

	if (pointer == NULL)
		exit(98);

	return (pointer);
}

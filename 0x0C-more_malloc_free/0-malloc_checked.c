#include "main.h"

/**
 * malloc_checked - allocate memory and check if it exists
 * @b: unsigne int
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}

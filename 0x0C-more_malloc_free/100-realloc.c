#include "main.h"

/**
 * _realloc - reallocates memory
 * @ptr: void pointer
 * @old_size: int initial pointer size
 * @new_size: new size
 *
 * Return: void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *copy;
	unsigned int i;

	if (ptr != NULL)
		copy = ptr;
	else
		return (malloc(new_size));

	if (old_size == new_size)
		return (ptr);

	if ((ptr != NULL) && (new_size == 0))
	{
		free(ptr);
		return (0);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (0);

	for (i = 0; i < (old_size || i < new_size); i++)
		*(new_ptr + 1) = copy[i];

	free(ptr);

	return (new_ptr);
}

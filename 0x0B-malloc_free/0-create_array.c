#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - generates an array using malloc
 * @size: size of the array
 * @c: character element value of all array elements
 *
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	int i;

	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

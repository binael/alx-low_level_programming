#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a copy of the string
 * @str: the string input
 *
 * Return: string
 */

char *_strdup(char *str)
{
	int i;
	char *new_str;

	if (str == NULL)
		return (NULL);

	new_str = malloc(strlen(str) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	strcpy(new_str, str);
}

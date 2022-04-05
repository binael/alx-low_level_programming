#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: string
 */

char *str_concat(char *s1, char *s2)
{
	int size;
	char *new_string;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = strlen(s1) + strlen(s2) + 1;
	new_string = malloc(size * sizeof(char));

	if (new_string == NULL)
		return (NULL);

	strcpy(new_string, s1);
	strcat(new_string, s2);

	return (new_string);
}

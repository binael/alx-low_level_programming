#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: seconc string
 * @n: the number of chars to be used
 *
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x]; x++)
		continue;
	for (y = 0; s2[y]; y++)
		continue;

	if (n > y)
		n = y;

	str = malloc((x + n + 1) * sizeof(char));

	if (str == NULL)
		return (0);

	for (x = 0; s1[x]; x++)
		str[x] = s1[x];

	for (y = 0; y < n; y++)
	{
		str[x] = s2[y];
		x += 1;
	}

	str[x] = '\0';

	return (str);
}

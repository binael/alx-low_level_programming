#include "main.h"

/**
 * rot13 - converts to rot13
 * @s - string input
 *
 * Return: string
 */

char *rot13(char *s)
{
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == alphabet[j])
			{
				*(s + i) = rot[j];
				break;
			}
		}
	}

	return (s);
}

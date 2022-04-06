#include "main.h"

/**
 * strtow - splits a string into two words
 * @str: the string input
 *
 * Return: array of two words
 */

char **strtow(char *str)
{
	char **word;
	int len;

	int i = 0, row = 0, col = 0, len1 = 0;

	if ((str == NULL) || (*str == '\0'))
		return (NULL);

	word = malloc(sizeof(char *) * 3);
	if (word == NULL)
		return (NULL);

	while (*(str + len1) != ' ')
		len1 += 1;

	len = strlen(str);
	word[0] = malloc((len1 + 2) * sizeof(char));
	word[1] = malloc((len - len1 + 1) * sizeof(char));
	word[2] = malloc(1 * sizeof(char));

	if ((word[0] == NULL) || (word[1] == NULL) || (word[2] == NULL))
		return (NULL);

	while (*(str + i) != '\0')
	{
		if (*(str + i) == ' ')
		{
			word[col][row] = '\0';
			col = 1;
			row = 0;
			continue;
		}

		word[col][row] = *(str + i);
		i += 1;
		row += 1;
	}

	word[col][row] = '\0';
	word[2][0] = '\0';

	return (word);
}

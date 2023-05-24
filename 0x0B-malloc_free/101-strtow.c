#include "main.h"

/**
 * strtow - splits a string into two words
 * @str: the string input
 *
 * Return: array of two words
 */

char **strtow(char *str)
{
	char **words;

	if (str == NULL)
		return (NULL);

	words = malloc(sizeof(char *) * SIZE);
	if (words == NULL)
		return (NULL);

	if (split_string(words, str))
		return (words);

	return (NULL);
}


/**
 * split_string - splits the value of a string and store in arraay
 * @word: the array with the split words of string
 * @str: the string to split
 *
 * Return: 1 on success, 0 on failure
*/
int split_string(char **word, char *str)
{
	int state = 0, i = 0, j = 0;

	word[i] = malloc(sizeof(char) * SIZE);
	if (word[i] == NULL)
		return (0);

	while (*str != '\0')
	{
		if (state == 1 && *str == ' ')
		{
			word[i][j] = '\0';
			i++;
			j = 0;
			state = 0;
			word[i] = malloc(sizeof(char) * SIZE);
			if (word[i] == NULL)
			{
				free_2d(word, i - 1);
				return (0);
			}
		}
		else if (*str != ' ')
		{
			word[i][j++] = *str;
			state = 1;
		}
		str++;
	}
	if (state == 0)
		word[i] = NULL;
	else
	{
		word[i][j] = '\0';
		word[i + 1] = NULL;
	}
	return (1);
}


/**
 * free_2d - frees the memory of a two dimensional array
 * @array: the array of strings
 * @size: the size of the array
 *
 * Return: void
*/
void free_2d(char **array, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		free(array[i]);
	}
	free(array);
}

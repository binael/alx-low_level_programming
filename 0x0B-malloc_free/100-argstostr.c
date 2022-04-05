#include "main.h"

/**
 * argstostr - concatenates all arguments
 * @ac: number of arguments
 * @av: he string arguments
 *
 * Return: concatenated string
 */

char *argstostr(int ac, char **av)
{
	char *new_string;
	int i;

	int len = 0;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	new_string = malloc((len + ac) * sizeof(char));

	if (new_string == NULL)
		return (NULL);

	strcpy(new_string, av[0]);

	for (i = 1: i < ac; i++)
	{
		strcat(new_string, "\n");
		strcat(new_string, av[i]);
	}

	return (new_string)
}

#include <stdio.h>

/**
 * main - prints the command line arguments
 * @argc: integer number of arguments
 * @argv: character-command line string inputs
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	(void) argc;
	(void) argv;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

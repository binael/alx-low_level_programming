#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: integer number of command line arguments
 * @argv: command line arguments array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (argv[1][i] < 48 || argv[1][i] > 57)
		{
			printf("Error\n");
			exit(98);
		}
	}

	for (j = 0; argv[2][j] != '\0'; j++)
	{
		if (argv[2][j] < 48 || argv[2][j] > 57)
		{
			printf("Error\n");
			exit(98);
		}
	}

	mul = atol(argv[1]) * atol(argv[2]);

	printf("%lu\n", mul);

	return (0);
}

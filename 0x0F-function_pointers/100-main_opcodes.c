#include <stdio.h>
#include <stdlib.h>

/**
 * main - main opcode printing
 * @argc: integer number of arguments
 * @argv: array of command line arguments
 *
 * Return: exit status
 */

int main(int argc, char *argv[])
{
	int num, i;
	unsigned char *m;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (argv < 0)
	{
		printf("Error\n");
		exit(2);
	}

	m = (unsigned char *)main;

	for (i = 0; i < (num - 1); i++)
	{
		printf("%02x ", m[i]);
	}

	printf("%02x", m[i]);
	printf("\n");

	return (0);
}

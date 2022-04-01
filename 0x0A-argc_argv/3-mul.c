#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplication from command line inputs
 * @argc: integer number of command line arguments
 * @argv: character string to be multiplied
 *
 * Return: 0 (success), 1 (failure)
 */

int main(int argc, char *argv[])
{
	if ((argc < 3) || (argc > 3))
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds all digits in the command line
 * @argc: command line number of inputs
 * @argv: command line inputs
 *
 * Return: 0 (success), 1 (failure)
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;

		while (argv[i][j] != '\0')
		{
			if ((argv[i][j] < '0') || (argv[i][j] > '9'))
			{
				printf("Error\n");
				return (1);
			}

			j += 1;
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

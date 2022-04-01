#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum number of coins to settle a given change
 * given that coin denominations are 25, 10, 5, 2, 1
 * @argc: number of command line arguments
 * @argv: each input from the command line
 *
 * Return: 1 (failure), 0 (success)
 */

int main (int argc, char *argv[])
{
	int i, remain;

	int change = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	remain = atoi (argv[1]);

	for (i = 0; i < 5; i++)
	{
		if (remain >= coins[i])
		{
			change += remain / coins[i];
			remain = remain % coins[i];
		}
	}

	printf("%d\n", change);

	return (0);
}

#include "calc.h"

/**
 * main - main function that scrapes input from command line
 * @argc: the number of command line inputs
 * @argv: the command line arguments
 *
 * Return: 0
 */

int main(argc, **argv)
{
	int num1, num2;

	if (argc > 4 || argc < 2)
	{
		printf("Error\n");
		exit(98);
	}

	if (!(argv[2] == "+" || argv[2] == "*" || argv[4] == "-"))
	{
		printf("Error\n");
		exit(99);
	}

	if (!(argv[2] == "/" || argv[2] == "%"))
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", get_op_func(argv[2])(argv[1], argv[3]));

	return (0);
}

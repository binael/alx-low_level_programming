#include "3-calc.h"

/**
 * main - main function that scrapes input from command line
 * @argc: the number of command line inputs
 * @argv: the command line arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]))
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		printf("%d\n", get_op_func(argv[2])(num1, num2));
	}
	else
	{
		printf("Error\n");
		exit(99);
	}

	return (0);
}

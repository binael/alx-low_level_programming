#include <stdio.h>

/**
 * main - prints the number of command line inputs
 * @argc: integer value of number of command line inputs
 * @argv: characters for each command line input
 *
 * Return: Always 0 (success)
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

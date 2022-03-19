#include "main.h"

/**
 * print_sign - Prints the sign of numbers
 * @c: Operand which can be negative or positive
 *
 * Return: 0 (zero), 1 (positive) and -1 (negative)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+\b");
		return (1);
	}
	else if (n == 0)
	{
		printf("0\b");
		return (0);
	}
	else if (n < 0)
	{
		printf("-\b");
		return (-1);
	}
	return (0);
}

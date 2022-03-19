#include "main.h"

/**
 * print_last_digit - Prints the sign of numbers
 * @n: Operand which can be negative or positive
 *
 * Return: n (number)
 */
int print_last_digit(int n)
{
	int i;
	if (n < 0)
	{
		i = n * -1;
		return (i);
	}
	return (n % 10);
}

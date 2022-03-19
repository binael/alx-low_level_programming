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

	i = n % 10;

	if (i < 0)
		i = i * -1;
	_putchar(i + '0');
	return (i);
}

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
		_putchar(i + '0');
		return (i);
	}
	_putchar(n + '0');
	return (n % 10);
}

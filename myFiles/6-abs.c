#include "main.h"

/**
 * _abs - Prints the sign of numbers
 * @n: Operand which can be negative or positive
 *
 * Return: n (number)
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

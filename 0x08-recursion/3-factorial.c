#include "main.h"

/**
 * factorial - find the factorial of numbers
 * @n: integer number to be resolved
 *
 * Return: factorial of numbers
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}

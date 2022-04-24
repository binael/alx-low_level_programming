#include "variadic_functions.h"

/**
 * sum_them_all - add all the inputs
 * @n: the constant integer
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...);
{
	va_list ap;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(ap, int);
		sum += num;
	}

	va_end(ap);

	return (sum);
}

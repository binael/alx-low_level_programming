#include "variadic_functions.h"

/**
 * sum_them_all - add all the inputs
 * @n: the constant integer
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		unsigned int num = va_arg(ap, unsigned int);
		sum += num;
	}

	va_end(ap);

	return (sum);
}

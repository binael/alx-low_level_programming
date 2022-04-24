#include "variadic_functions.h"

/**
 * print_numbers - print numbers separated by a given char
 * @separator: constant characters acting as number separators
 * @n: constant variable integers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}

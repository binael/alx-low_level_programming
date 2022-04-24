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

	if (separator == NULL)
		return;

	va_start(ap, n);

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d%s", va_arg(ap, unsigned int), separator);
	}

	printf("%d\n", va_arg(ap, unsigned int));

	va_end(ap);
}

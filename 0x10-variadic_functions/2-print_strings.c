#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: characters acting as separators
 * @n: constant character
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		char *s = va_arg(ap, char *);

		if (s == NULL)
			printf("%p", s);
		else
			printf("%s", s);

		if (separator && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}

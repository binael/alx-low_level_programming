#include "variadic_functions.h"

/**
 * print_all - print character, float, string and integer
 * @format: constant string format
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	int i = 0, b = 1;

	va_start(ap, format);

	while (*(format + i))
	{
		switch (*(format + i))
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
				{
					printf("%p", s);
					break;
				}
				printf("%s", s);
				break;
			default:
				b = 0;
		}
		if (*(format + i + 1) && b)
			printf(", ");

		b = 1;
		i++;
	}
	printf("\n");
	va_end(ap);
}

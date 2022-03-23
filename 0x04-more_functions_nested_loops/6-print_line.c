#include "main.h"

/**
 * print_line - prints line times the number given
 * @n: number of times the line is printed
 */

void print_line(int n)
{
	int i;

	if  (n > 0)
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
	}
	
	_putchar('\n');
}

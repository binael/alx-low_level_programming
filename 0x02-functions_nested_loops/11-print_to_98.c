#include "main.h"

/**
 * print_to_98 - Prints the sign of numbers
 * @n: Operand which can be negative or positive
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; --n)
			printf("%d, ", n);
	}
	else if (n == 0)
	{
		for (; n  < 98; ++n)
			printf("%d, ", n);
	}
	
	printf("%d\n");
}

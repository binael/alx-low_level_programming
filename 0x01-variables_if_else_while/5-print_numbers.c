#include <stdio.h>

/**
 * main - Print 0-9 numbers of base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; ++n)
	{
		printf("%d", n);
	}

	putchar(10);

	return (0);
}

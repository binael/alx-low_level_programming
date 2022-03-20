#include <stdio.h>

/**
 * main - Function that prints Fibonacci numbers up to 50
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	double a, b, sum;

	a = 1;
	b = 2;
	sum = 0;

	printf("%lf, %lf", a, b);

	for (n = 3; n <= 50; ++n)
	{
		sum = a + b;
		printf(", %lf", sum);
		a = b;
		b = sum;
	}

	printf("\n");

	return (0);
}

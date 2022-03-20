#include <stdio.h>

/**
 * main - Function that prints Fibonacci numbers up to 50
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	double a, b, sum, even_sum;

	a = 1;
	b = 2;
	sum = 0;
	even_sum = 2;

	while (sum <= 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;

		if ((sum % (double) 2) == (double) 0)
			even_sum += sum;
	}

	printf("%.0f\n", even_sum);

	return (0);
}

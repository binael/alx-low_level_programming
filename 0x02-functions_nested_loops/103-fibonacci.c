#include <stdio.h>

/**
 * main - Function that prints Fibonacci numbers up to 50
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int a, b, sum, even_sum;

	a = 1;
	b = 2;
	sum = 0;
	even_sum = 2;

	while (sum <= 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;

		if ((sum % 2) == 0)
			even_sum += sum;
	}

	printf("%ld\n", even_sum);

	return (0);
}

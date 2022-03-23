#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int count, check1, check2;
	long int a, b, sum1, sum2, x, y;

	a = 1;
	b = 2;
	check1 = check2 = 1;
	printf("%ld, %ld", a, b);
	for (count = 0; count < 96; count++)
	{
		if (check1)
		{
			sum1 = a + b;
			printf(", %ld", sum1);
			a = b;
			b = sum1;
		}
		else
		{
			if (check2)
			{
				x = a % 1000000000;
				y = b % 1000000000;
				a = a / 1000000000;
				b = b / 1000000000;
				check2 = 0;
			}
			sum2 = x + y;
			sum1 = a + b + (sum2 / 1000000000);
			printf(", %ld", sum1);
			printf("%ld", sum2 % 1000000000);
			a = b;
			b = sum1;
			x = y;
			y = sum2 % 1000000000;
		}
		if (((a + b) < 0) && (check1 == 1))
			check1 = 0;
	}
	printf("\n");
	return (0);
}

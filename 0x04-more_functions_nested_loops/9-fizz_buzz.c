#include <stdio.h>

/**
 * main - prints fizz for 3, buzz for 5 and fizzbuzz for 15
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
			printf("FizzBuzz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else
			printf("%d", i);

		putchar(32);
	}
	printf("\n");

	return (0);
}

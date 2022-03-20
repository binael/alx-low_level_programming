#include <stdio.h>

/**
 * main - Function that computes the sum of the multiples of 5 and 5
 */
void main(void)
{
	int i;
	int sum;

	sum = 0

	for (i = 1; i < 1024)
	{
		if ((i % 3) == 0)
			sum += i;
		if ((i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);
}

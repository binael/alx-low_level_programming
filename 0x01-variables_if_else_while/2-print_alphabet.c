#include <stdio.h>

/**
 * main - Print a-z using lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; ++n)
	{
		putchar(n);
	}

	putchar(10);

	return (0);
}

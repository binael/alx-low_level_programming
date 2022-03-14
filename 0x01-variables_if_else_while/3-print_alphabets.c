#include <stdio.h>

/**
 * main - Print a-z and A-Z using lowercase and uppercase
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

	for (n = 'A'; n <= 'Z'; ++n)
	{
		putchar(n);
	}

	putchar(10);

	return (0);
}

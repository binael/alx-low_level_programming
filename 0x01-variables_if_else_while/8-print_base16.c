#include <stdio.h>

/**
 * main - Print lowercase hexadecimal number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; ++n)
	{
		putchar(n + '0');
	}

	for (n = 'a'; n <= 'f'; ++n)
	{
		putchar(n);
	}

	putchar(10);

	return (0);
}

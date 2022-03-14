#include <stdio.h>

/**
 * main-print a-z using lowercase
 * return (0) - means success
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

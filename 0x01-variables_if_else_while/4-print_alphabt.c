#include <stdio.h>

/**
 * main - Print a-z using lowercase skip q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; ++n)
	{
		if (n == 'e')
		{
			continue;
		}
		else if (n == 'q')
		{
			continue;
		}
		else
		{
			putchar(n);
		}
	}

	putchar(10);

	return (0);
}

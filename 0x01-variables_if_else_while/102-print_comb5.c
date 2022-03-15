#include <stdio.h>

/**
 * main - Final advanced number arrangement aka comb5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; ++a)
	{
		for (b = 0; b < 10; ++b)
		{
			for (c = 0; c < 10; ++c)
			{
				for (d = 0; d < 10; ++d)
				{
					if (((a == c) && (b >= d)) || (a > c))
					{
						continue;
					}

					putchar(a + '0');
					putchar(b + '0');
					putchar(32);
					putchar(c + '0');
					putchar(d + '0');

					if ((a == 9) && (b == 8) && (c == 9) && (d == 9))
					{
						continue;
					}

					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar(10);
	return (0);
}

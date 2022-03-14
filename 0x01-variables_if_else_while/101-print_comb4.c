#include <stdio.h>

/**
 * main - Advanced number arrangement
 *
 * Return:  Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 10; ++x)
	{
		for (y = 1; y < 10; ++y)
		{
			for (z = 2; z < 10; ++z)
			{
				if ((z > y) && (y > x))
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
				}
				else
				{
					continue;
				}

				if ((x == 7) && (y == 8) && (z == 9))
				{
					continue;
				}

				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);

	return (0);
}

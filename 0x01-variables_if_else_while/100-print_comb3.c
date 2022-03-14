#include <stdio.h>

/**
 * main - Print combed number format
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			if ((i - j == 1) || (i - j == 2) || (i - j == 3) || (i - j == 0))
			{
				continue;
			}
			else if ((i - j == 4) || (i - j == 5) || (i - j == 6))
			{
				continue;
			}
			else if ((i - j == 7) || (i - j == 8) || (i - j == 9))
			{
				continue;
			}

			if ((i == 8) && (j == 9))
			{
				continue;
			}

			putchar(i + '0');
			putchar(j + '0');
			putchar(44);
			putchar(32);

		}	
	}

	putchar(10);

	return (0);
}

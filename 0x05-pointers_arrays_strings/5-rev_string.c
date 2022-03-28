#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to ber reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int c1;
	char temp;

	int lenght = 0;
	int boolean = 1;

	while (boolean)
	{
		if (*(s + lenght) == '\0')
		{
			break;
		}

		lenght += 1;
	}

	for (c1 = 0; c1 < lenght / 2; c1++)
	{
		temp = *(s + c1);
		*(s + c1) = *(s + lenght - c1 - 1);
		*(s + lenght - c1 - 1) = temp;
	}
}

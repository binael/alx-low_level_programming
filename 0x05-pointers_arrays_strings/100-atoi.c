#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string input
 *
 * Return: integer value of string
 */

int _atoi(char *s)
{
	int num = 0;
	int check = 1;
	int i = 0;
	int sign = 1;

	while (*(s + i) != '\0')
	{
		if (check == 1)
		{	if (*(s + i) == '-')
			{
				sign = -1;
				check = 0;
			}
		}
		if ((*(s + i) >= '0') && (*(s + i) <= '9'))
		{
			num = num * 10 + (*(s + i) + '0');
			check = 0;
		}
		if ((num > 0) && (*(s + i) < '0' || *(s + i) > '9'))
			break;

		i += 1;
	}

	if (num > 0)
		return (num * sign);

	return (0);
}

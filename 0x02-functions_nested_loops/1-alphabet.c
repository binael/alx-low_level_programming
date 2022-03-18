#include "main.h"

/**
 * main - Program that prints putchar
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar(10);
}

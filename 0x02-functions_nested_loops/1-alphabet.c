#include "main.h"

/**
 * main - Program that prints putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	print_alphabet();

	return (0);
}

void print_alphabet()
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar(10);
}

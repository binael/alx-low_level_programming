#include <stdio.h>
#include <time.h>
#include <string.h>

/**
 * main - countdown of alphabets
 * from a - z separated by newlint
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	for (n = 'a'; n <= 'z'; n++)
	{	putchar(n);
	}
	putchar('\n');
	return (0);
}

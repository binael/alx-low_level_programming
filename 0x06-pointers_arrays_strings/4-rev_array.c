#include "main.h"

/**
 * reverse_array - reverses the elements of an array
 * @a: the array
 * @n: the number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp,  j = 0;
	int *b = a;

	for (i = (n - 1); i >= 0; i--)
	{
		temp = a[i];
		b[j] = a[i];
		a[i] = temp;
		j++;
	}

	a = b;
}

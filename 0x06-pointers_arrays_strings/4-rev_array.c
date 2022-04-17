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

	for (i = (n - 1); i > (n / 2); i--)
	{
		temp = a[i];
		a[j] = a[i];
		a[i] = temp;
		j++;
	}
}

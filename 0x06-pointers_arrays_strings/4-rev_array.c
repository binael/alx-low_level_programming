#include "main.h"

/**
 * reverse_array - Function that reverses the array
 *
 * @a: pointer
 * @n: the number of items
 */
 
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n / 2; i++)
	{
		if (i == n - i)
			break;

		j = *(a + n - i - 1);
		*(a + n - i - 1) = *(a + i);
		*(a + i) = j;
	}
}

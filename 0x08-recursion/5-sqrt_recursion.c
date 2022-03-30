#include "main.h"

/**
 * _square_root - computes the square root
 * @root: integer guessed square root
 * @num: integer number to find the root
 *
 * Return: the value of the root
 */

int _square_root(int root, int num)
{
	if ((root * root) == num)
		return (root);
	else if ((root * root) > num)
		return (-1);

	return (_square_root(root + 1, num));
}

/**
 * _sqrt_recursion - returns the results of computation
 * @n: integer number input
 *
 * Return: the result of the square root
 */

int _sqrt_recursion(int n)
{
	int root = 1;

	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);

	return (_square_root(root, n));
}

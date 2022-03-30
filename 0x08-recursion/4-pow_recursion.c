#include "main.h"

/**
 * _pow_recursion - returns the power of an integer
 * @x: the integer base or number
 * @y: the integer power
 *
 * Return: x power y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}

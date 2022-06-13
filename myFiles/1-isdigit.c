#include "main.h"

/**
 * _isdigit - checks if an input is a digit
 * @c: character input
 *
 * Return: 0 (not digit), 1 (digit)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

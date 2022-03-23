#include "main.h"

/**
 * _isupper - checks if a character is upper case
 * @c: character input
 *
 * Return: 0 (not uppercase), 1 (uppercase)
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

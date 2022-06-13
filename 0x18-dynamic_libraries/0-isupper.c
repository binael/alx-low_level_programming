#include "main.h"

/**
 * _isupper - checks for upper case characters
 * @c: character to check
 *
 * Return: 0 (failure), 1 (success)
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}

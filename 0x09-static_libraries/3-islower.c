#include "main.h"

/**
 * _islower - Entry point
 * @c: lowercase or uppercase alphabets
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else if ((c >= 'A') && (c <= 'Z'))
		return (0);
	return (0);
}

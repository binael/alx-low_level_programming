#include "main.h"

/**
 * comp_string - function that compares string
 * @len: integer end of string
 * @size: length of string
 * @s: string
 *
 * Return: 1 (if true), 0 (if false)
 */
int comp_string(int len, int size, char *s)
{
	if (*s != *(s + len))
		return (0);
	if (*s == *(s + (size / 2)))
		return (1);
	return (comp_string(len - 2, size, s + 1));
}

/**
 * _strlen_recursion - length of string
 * @s: string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - determines if a string is a palindrome
 * @s: pointer or a string input
 *
 * Return: 1 (if palindrome), 0 (if not)
 */
int is_palindrome(char *s)
{
	int size;

	int len = _strlen_recursion(s);

	if ((len == 0) || (len == 1))
		return (1);

	size = len;
	len = len - 1;
	return (comp_string(len, size, s));
}

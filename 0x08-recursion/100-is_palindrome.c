#include "main.h"

/**
 * comp_string - function that compares string
 * @i: integer start of string
 * @len: integer end of string
 * @size: length of string
 * @s: string
 *
 * Return: 1 (if true), 0 (if false)
 */
int comp_string(int i, int len,int size, char *s)
{
	if (s[i] == s[size / 2])
	{
		if ((size % 2 == 0) && (s[i] != s[len]))
			return (0);

		return (1);
	}
	if (s[i] != s[len])
		return (0);

	return (comp_string(i + 1, len - 1, size, s));
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

	int len = 0;
	int i = 0

	while (*(s + len) != '\0')
		len += 1;
	if ((len == 0) || (len == 1))
		return (1);

	size = len;
	len = len - 1;
	return comp_string(i, len, size, s)
}

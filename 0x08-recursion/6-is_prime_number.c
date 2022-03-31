#include "main.h"

/**
 * check_prime - iterates if odds are the prime of number
 * @odd: odd number input to check for divisibilty
 * @num: number to check for prime
 *
 * Return: 1 (n is prime), 0 (n is not prime)
 */

int check_prime(int odd, int num)
{
	if (odd >= num)
		return (1);
	else if ((num % odd) == 0)
		return (0);

	return (check_prime(odd + 2, num));
}

/**
 * is_prime_number - final analysis of the input
 * @n: integer input
 *
 * Return: 1 (n is prime), 0 (n is not prime)
 */

int is_prime_number(int n)
{
	int odd = 3;

	if (n <= 1)
		return (0);
	else if ((n == 2) || (n == 3))
		return (1);
	else if ((n % 2) == 0)
		return (0);

	return (check_prime(odd, n));
}

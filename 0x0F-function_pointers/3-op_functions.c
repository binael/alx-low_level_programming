#include "calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - subtracts b from a
 * @a: first integer
 * @b: second integer
 *
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of dividing a by b
 */
int op_div(int a, int b)
{
	if ((b) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return ((a) / (b));
}

/**
 * op_mod - the remainder from dividing two integers
 * @a: the dividend integer
 * @b: the divisor integer
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if ((b) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return((a) % (b));
}

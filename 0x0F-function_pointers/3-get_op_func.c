#include "calc.h"

/**
 * get_op_func - get operator function 
 * @s: the operator
 * @a: first integer
 * @b: second integer
 *
 * Return: pointer to operator function
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (i < 6)
	{
		if (ops[i].op == s)
		{
			return(ops[i].(f(a, b)));
		}
		i++;
	}

	return (0);
}

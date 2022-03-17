#include "3-calc.h"

/**
 * get_op_func - get the operator of the calculation
 *
 * @s: operator income to compare
 *
 * Return: function associate to the operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}

#include <stdio.h>
#include "3-calc.h"

/**
 * 
 * 
 */

int (*get_op_func(char *s))(int num1, int num2)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0, result = 0;

	while (*s && op_t ops[i])
	{
		if (ops[i] == s)
		{
			return (op_t->ops[i](num1, num2));
		}
		i++;
	}

	printf("Error\n");
	return (99);
}


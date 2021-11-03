#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * 
 * 
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc > 5)
	{
		printf("Error\n");
		return (98);
	}
	/*si argc ne correspond pas return error puis 98*/
	/*si opérateur ne correspond pas return error puis 98*/
	/*si divise ou modulo 0 error puis return 100*/

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}

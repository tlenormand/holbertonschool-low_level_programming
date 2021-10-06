#include <stdio.h>

/**
 * positive_or_negative - print whether the number in the variable n is positive or negative.
 *
 * Return: 0 always
 */

int positive_or_negative(int n)
{

if (n > 0)
	printf("%d is positive\n", n);
if (n == 0)
	printf("%d is zero\n", n);
if (n < 0)
	printf("%d is negative\n", n);

return (0);
}

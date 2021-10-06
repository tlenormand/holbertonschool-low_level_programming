#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - print whether the number in the variable n is positive or negative.
 *
 * Return: 0 always
 */

/* betty style doc for function main goes there */
int positive_or_negative(int n)
{

	srand(time(0));
	/*n = rand() - RAND_MAX / 2;*/
/* your code goes there */
if (n > 0)
printf("%d is positive\n", n);
if (n == 0)
printf("%d is zero\n", n);
if (n < 0)
printf("%d is negative\n", n);
return (0);
}

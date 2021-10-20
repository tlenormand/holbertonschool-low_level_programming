#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number
 * Return: natural square
 */

int _sqrt_recursion(int n)
{
	int iteration = 0;

	if (iteration < n)
	{
		iteration = sqr(n, iteration);
		return (iteration);
	}
	return (-1);
}

/**
 * sqr - function that find the natural square of a number
 * @n: number
 * @iteration: the square number to compare with n
 * Return: natural square
 */

int sqr(int n, int iteration)
{
	if (iteration < n)
	{
		if (iteration * iteration != n)
		{
			iteration += 1;
			iteration = sqr(n, iteration);
		}
	}
	else if (iteration == n && iteration != 1)
		return (-1);
	return (iteration);
}

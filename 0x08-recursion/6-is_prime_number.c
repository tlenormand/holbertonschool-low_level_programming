#include "main.h"

/**
 * is_prime_number - function verify if the input integer is a prime number
 * @n: number
 * Return: 1 if prime number else 0
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (prime(n, i));
}

/**
 * prime - function verify if the input integer is a prime number
 * @n: number
 * @i: number of iteration
 * Return: 1 if prime number else 0
 */

int prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i == n / 2)
		return (1);
	return (prime(n, i + 1));
}

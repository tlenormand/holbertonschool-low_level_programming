#include "main.h"
#define CHARBIT 8

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: varaible test
 *
 * Return: absolute value of an integer
 */

int _abs(int n)
{
int const mask = n >> (sizeof(int) * CHARBIT - 1);

return ((n + mask) ^ mask);
}

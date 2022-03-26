#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: charactere to control
 *
 * Return: 1 if is upper else 0
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}

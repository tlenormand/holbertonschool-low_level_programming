#include "main.h"

/**
 * reset_to_98 - function that updates the value it points to to 98
 *
 * @n: value to update
 *
 * Return: None
 */

void reset_to_98(int *n)
{
	int *pointer = n;

	*pointer = 98;
}

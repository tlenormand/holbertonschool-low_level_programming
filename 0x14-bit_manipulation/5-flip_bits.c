#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: number to change the bit
 * @index: position of the bit to get
 * Return: 1 if success, 0 othewise
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, result = 0;

	for (i = 0; i < 64; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			result += 1;
	}

	return (result);
}
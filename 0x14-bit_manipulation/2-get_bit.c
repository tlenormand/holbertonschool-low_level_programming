#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to get the index
 * @index: position of the bit to get
 * Return: value of the bit at index position
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, bin_idx = 1;
	unsigned long int number = n;

	for (i = 0; number > 0; i++)
	{
		if (i == index)
			return ((n & (1 << index)) >> index);
		else if (((n & (1 << i)) >> i) == 1)
			number -= bin_idx;
		bin_idx *= 2;
	}

	return (-1);
}

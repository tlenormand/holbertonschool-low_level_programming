#include "main.h"
#include <stdio.h>

/**
 * @brief 
 * 
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *number = n;

	if (index <= 32)
	{
		*number = ((*number >> index));
		if (((*number >> 0) & 1) == 0)
			*number += 1;
		*number = (*number << index);
		*n = *n | *number;
		return (1);
	}

	return (-1);
}


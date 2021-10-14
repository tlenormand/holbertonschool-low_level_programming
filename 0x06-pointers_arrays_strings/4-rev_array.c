#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array to reverse
 * @n: lenght of the "a" array
 */

void reverse_array(int *a, int n)
{

	int temp, left;

	for (left = 0; left < n; left++, n--)
	{
		temp = a[left];
		a[left] = a[n];
		a[n] = temp;
	}

}

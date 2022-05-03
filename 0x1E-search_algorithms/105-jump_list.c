#include "search_algos.h"

/**
 * jump_list - function that searches for a value in a sorted list of integers
 * using the Jump search algorithm
 *
 * @list: pointer to the head of the list to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return:
 *	first index where value is located
 *	-1 otherwise
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *prev = list;
	size_t jump = sqrt(size);
	size_t high = 0;
	size_t low = 0;

	if (!list)
		return (NULL);

	while (list && list->next && list->n < value)
	{
		prev = list;
		while (list->next && jump > 0)
		{
			list = list->next;
			jump--;
			high++;
		}
		if (!list->next)
			high++;
		printf("Value checked at index [%ld] = [%d]\n", high, list->n);
		jump = sqrt(size);
	}

	if (prev->n <= value)
	{
		low = high - sqrt(size);
		printf("Value found between indexes [%ld] and [%ld]\n", low, high);
		while (prev && high <= size)
		{
			printf("Value checked at index [%ld] = [%d]\n", low, prev->n);
			if (prev->n == value)
				return (prev);
			prev = prev->next;
			low++;
		}
	}

	return (NULL);
}

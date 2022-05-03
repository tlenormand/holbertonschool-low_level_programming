#include "search_algos.h"

/**
 * linear_skip - function that searches for a value in a sorted list of
 * integers using the Jump search algorithm
 *
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return:
 *	first index where value is located
 *	-1 otherwise
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev = list;

	if (!list)
		return (NULL);

	while (list->express && list->n < value)
	{
		prev = list;
		list = list->express;
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
	}

	if (!list->express && list->n < value)
	{
		prev = list;
		while (list->next)
			list = list->next;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   prev->index, list->index);

	while (prev && prev->n <= value)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);

		prev = prev->next;
	}

	return (NULL);
}

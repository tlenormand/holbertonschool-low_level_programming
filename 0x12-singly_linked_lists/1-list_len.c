#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: list address
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int number_of_nodes = 0;

	if (h == NULL)
		printf("(nil)");

	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}

	return (number_of_nodes);
}

#include "lists.h"
#include <stdio.h>

/**
 * print_list - xxx
 * @h: xxx
 * Return: xxx
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

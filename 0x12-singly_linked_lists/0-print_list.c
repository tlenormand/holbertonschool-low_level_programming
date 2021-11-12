#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - xxx
 * @h: xxx
 * Return: xxx
 */

size_t print_list(const list_t *h)
{
	int number_of_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		number_of_nodes++;
		h = h->next;
	}

	return (number_of_nodes);
}

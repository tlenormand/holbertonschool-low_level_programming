#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: list address
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	int number_of_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);

		number_of_nodes++;
		h = h->next;
	}

	return (number_of_nodes);
}

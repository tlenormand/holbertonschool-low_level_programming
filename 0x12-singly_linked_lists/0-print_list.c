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

	if (h == NULL)
		printf("(nil)");

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		number_of_nodes++;
	}

	return (number_of_nodes);
}

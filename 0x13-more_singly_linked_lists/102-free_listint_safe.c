#include <stdio.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: list address
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next_node;
	listint_t *tmp;
	int number_of_node = 0, index = 0;

	next_node = *h;

	while (next_node)
	{
		tmp = next_node;
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		next_node = next_node->next;
		tmp->next = NULL;
		free(tmp);
		number_of_node++;
		index++;
	}

	*h = NULL;

	return (number_of_node);
}

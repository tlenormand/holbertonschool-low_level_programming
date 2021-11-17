#include "lists.h"
#include <stdio.h>

/**
 * free_listint - function that frees a listint_t list
 * @head: list address
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next_node = *h, *tmp;
	int number_of_node = 0;

	delete_loop(next_node);
	next_node = *h;

	while (next_node)
	{
		tmp = next_node;
		next_node = next_node->next;
		tmp->next = NULL;
		free(tmp);
		number_of_node++;
	}

	*h = NULL;

	return (number_of_node);
}

void delete_loop(listint_t *head)
{
	listint_t *next_node = head;
	listint_t *prev_node = head;
	int index = 0;

	while (next_node)
	{
		next_node = next_node->next;
		index++;
		if (detect_loop(head, next_node, index) != 0)
		{
			prev_node->next = NULL;
			return;
		}
		prev_node = prev_node->next;
	}
}

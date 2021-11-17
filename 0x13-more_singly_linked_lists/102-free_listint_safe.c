#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: list address
 * Return: number of node
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	int number_of_node = 0;

	delete_loop(*h);

	while (*h)
	{
		tmp = (*h);
		(*h) = (*h)->next;
		free(tmp);
		number_of_node++;
	}

	*h = NULL;

	return (number_of_node);
}

/**
 * delete_loop - function that delete the value pointed by the looped node
 * @head: list address
 *
 * Description: the next value pointed by the node is set to NULL
 */

void delete_loop(listint_t *head)
{
	listint_t *next_node = head, *prev_node = head;
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

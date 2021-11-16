#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: list address
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr_node = *head, *prev_node = NULL, *next_node = NULL;

	while (curr_node != NULL)
	{
		next_node = curr_node->next;
		curr_node->next = prev_node;
		prev_node = curr_node;
		curr_node = next_node;
	}

	return (*head = prev_node);
}

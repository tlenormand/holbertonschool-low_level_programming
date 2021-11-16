#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes the node index of a linked list
 * @head: list address
 * @index: index of the list where the new node should be deleted
 * Return: 1 if it successded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next_node, *prev_node;
	unsigned int loop = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	next_node = *head;
	prev_node = *head;

	if (index == 0)
	{
		*head = next_node->next;
		free(next_node);
		return (1);
	}

	while (loop < index)
	{
		next_node = next_node->next;
		if (next_node == NULL)
			return (-1);
		loop++;
		if (loop < index)
			prev_node = next_node;
	}

	prev_node->next = next_node->next;
	free(next_node);

	return (1);
}

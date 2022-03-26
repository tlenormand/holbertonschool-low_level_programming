#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts new node at a given position
 * @head: list address
 * @idx: index of the list where the new node should be added
 * @n: value to add at the new node
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *next_node, *prev_node;
	unsigned int loop = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	next_node = *head;
	prev_node = *head;

	while (loop < idx)
	{
		next_node = next_node->next;
		loop++;
		if (loop < idx)
			prev_node = next_node;

		if (prev_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}

	prev_node->next = new_node;
	new_node->next = next_node;

	return (new_node);
}

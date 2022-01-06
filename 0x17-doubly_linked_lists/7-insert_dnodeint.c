#include "lists.h"
#include <stdio.h>

/**
 * create_node - Create a new node for dlistint_t list
 *
 * @n: The element of the node
 *
 * Return: new node or NULL if the allocation failed
 */
dlistint_t *create_node(int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	return (new);
}

/**
 * insert_dnodeint_at_index - insert a new node at the index
 * of a dlistint_t list.
 *
 * @h: The first node of a dlistint_t list.
 * @idx: The index where the node is insert
 * @n: Element of the new node
 *
 * Return: The new node, or NULL if the allocation of memory failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *current = *h;
	unsigned int current_idx = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current->next != NULL && current_idx < idx)
	{
		current = current->next;
		current_idx++;
	}

	if (current_idx + 1 == idx && current->next == NULL)
		return (add_dnodeint_end(h, n));

	if (current_idx == idx)
	{
		new = create_node(n);
		if (new == NULL)
			return (NULL);

		new->prev = current->prev;
		new->next = current;
		current->prev->next = new;
		current->prev = new;
	}

	return (new);
}

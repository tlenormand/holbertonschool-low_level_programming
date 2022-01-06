#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts a new node at a given position
 * @h: pointer to the dlistint_t list
 * @idx: position to insert
 * @n: value
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *ptr = *h;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx > 0)
	{
		ptr = ptr->next;
		idx--;
		if (!ptr && idx == 0)
			return (add_dnodeint_end(h, n));
		else if (!ptr && idx != 0)
			return (NULL);
	}

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = ptr->prev;
	new->next = ptr;

	ptr->prev->next = new;
	ptr->prev = new;

	return (new);
}

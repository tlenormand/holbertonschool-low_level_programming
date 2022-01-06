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
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *h;

	if (new == NULL || (*h == NULL && idx != 0))
	{
		printf("yro");
		return (NULL);
	}

	if (*h == NULL && idx == 0)
	{
		printf("yoe");
		return (add_dnodeint(h, n));
	}

	while (idx > 1)
	{
		ptr = ptr->next;
		idx--;
		if (ptr == NULL)
			return (NULL);
	}

	new->n = n;
	new->prev = ptr;
	new->next = ptr->next;
	ptr->next = new;

	if (ptr->prev != NULL)
		ptr->next->prev = new;
	else
		ptr->prev = NULL;

	return (new);
}

#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list
 *
 * @h: pointer to the dlistint_t list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}

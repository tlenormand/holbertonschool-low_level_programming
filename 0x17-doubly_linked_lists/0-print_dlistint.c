#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer to the dlistint_t list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node);
}

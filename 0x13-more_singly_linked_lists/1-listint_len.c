#include "lists.h"

/**
 * listint_len - function that returns number of elements in a linked list
 * @h: list address
 * Return: number of node finded
 */

size_t listint_len(const listint_t *h)
{
	int number_of_nodes = 0;

	while (h != NULL)
	{
		number_of_nodes++;
		h = h->next;
	}

	return (number_of_nodes);
}

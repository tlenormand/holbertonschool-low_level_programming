#include "lists.h"

/**
 * delete_dnodeint_at_index - function that indexetes
 * the node at index index of a dlistint_t linked list
 *
 * @head: pointer to the dlistint_t list
 * @index: position to indexete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
		*head = (*head)->next;
	else
	{
		while (index > 0)
		{

			del = del->next;
			index--;
		}
	}

	if (del->next != NULL)
		del->next->prev = del->prev;

	if (del->prev != NULL)
		del->prev->next = del->next;

	free(del);

	return (1);
}

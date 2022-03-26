#include "lists.h"

/**
 * get_dnodeint_at_index - function returns the nth node
 * of a dlistint_t linked list
 *
 * @head: pointer to the dlistint_t list
 * @index: nth node to return
 * Return: the nth node of a dlistint_t linked list or NULL if failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index > 0)
	{
		if (head->next != NULL)
			head = head->next;
		else
			return (NULL);

		index--;
	}

	return (head);
}

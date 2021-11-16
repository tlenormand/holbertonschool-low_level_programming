#include "lists.h"

/**
 * get_nodeint_at_index - function returns nth node of a listint_t linked list
 * @head: list address
 * @index: index of the list to return
 * Return: nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int loop;

	if (head == NULL)
		return (NULL);

	for (loop = 0; loop < index && head->next != NULL; loop++)
	{
		head = head->next;
	}

	return (head);
}

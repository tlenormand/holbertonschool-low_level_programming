#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: list address
 * Return: returns the head node’s data (n), 0 if head == NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value;

	if (*head == NULL)
		return (0);

	tmp = *head;
	value = tmp->n;
	*head = tmp->next;

	free(tmp);

	return (value);
}

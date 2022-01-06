#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to the dlistint_t list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *freed = head;

	while (head != NULL)
	{
		head = head->next;
		free(freed);
		freed = head;
	}
}

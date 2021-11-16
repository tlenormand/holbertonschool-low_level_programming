#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: list address
 * @n: new element to add
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list, *old_list;

	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
		return (NULL);

	new_list->n = n;
	new_list->next = NULL;

	if (*head == NULL)
		*head = new_list;
	else
	{
		old_list = *head;
		while (old_list->next != NULL)
			old_list = old_list->next;
		old_list->next = new_list;
	}

	return (new_list);
}

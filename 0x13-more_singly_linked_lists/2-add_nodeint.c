#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: list address
 * @n: new element to add
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}

#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: list address
 * Return: address of the node where the loop starts, or NULL if no loop
 *
 * Description: check if endless listint_t linked list exist
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *search = head, *start = head;

	while (search && search->next)
	{
		while (start != search && start != search->next)
			start = start->next;

		if (start == search->next)
			return (search->next);

		start = head;
		search = search->next;
	}

	return (NULL);
}

#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: list address
 *
 * Description: the function sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *old_list = *head;

	while (old_list != NULL)
	{
		tmp = old_list;
		old_list = old_list->next;
		free(tmp);
	}

	*head = NULL;
}

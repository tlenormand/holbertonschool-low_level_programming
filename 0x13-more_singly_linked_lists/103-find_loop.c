#include <stdio.h>
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
	listint_t *curr_node = head;
	size_t number_of_nodes = 0;

	while (curr_node)
	{
		number_of_nodes++;
		curr_node = curr_node->next;
		if (detect_loop(head, curr_node, number_of_nodes) != 0)
		{
			return (curr_node);
		}
	}

	return (NULL);
}

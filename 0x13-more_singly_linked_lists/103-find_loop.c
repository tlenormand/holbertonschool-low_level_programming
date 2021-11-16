#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: list address
 * Return: number of node finded
 *
 * Description: check if endless listint_t linked list exist
 */

listint_t *find_listint_loop(listint_t *head)
{
	const listint_t *curr_node = head;
	int number_of_nodes = 0;

	while (curr_node)
	{
		number_of_nodes++;
		curr_node = curr_node->next;
		if (detect_loop(head, curr_node, number_of_nodes) != 0)
		{
			printf("Loop starts at [%p] %d\n", (void *)curr_node, curr_node->n);
			return ((void *)curr_node);
		}
	}

	return (NULL);
}

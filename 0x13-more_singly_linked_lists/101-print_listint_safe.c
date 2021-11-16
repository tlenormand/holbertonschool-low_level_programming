#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: list address
 * Return: number of node finded
 *
 * Description: check if endless listint_t linked list exist
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr_node = head;
	int number_of_nodes = 0;

	while (curr_node)
	{
		printf("[%p] %d\n", (void *)curr_node, curr_node->n);
		number_of_nodes++;
		curr_node = curr_node->next;
		if (detect_loop(head, curr_node, number_of_nodes) != 0)
		{
			printf("-> [%p] %d\n", (void *)curr_node, curr_node->n);
			break;
		}
	}

	return (number_of_nodes);
}

/**
 * detect_loop - function that detect if a loop exist in a linked list
 * @head: list address
 * @curr_node: current node to check if it doesn't already exist
 * @index: number of incrementation we need to do before find curr_node
 * Return: 0 if no loop, other if loop find
 */

int detect_loop(const listint_t *head, const listint_t *curr_node, int index)
{
	while (head != curr_node)
	{
		head = head->next;
		index--;
	}

	return (index);
}

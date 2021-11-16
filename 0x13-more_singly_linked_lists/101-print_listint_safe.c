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
	int number_of_nodes = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		number_of_nodes++;
		head = head->next;
		if (detect_loop(head) == 1)
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
	}

	return (number_of_nodes);
}

/**
 * detect_loop - function that detect if a loop exist in a linked list
 * @head: list address
 * Return: 0 if no loop, 1 if loop find
 */

int detect_loop(const listint_t *head)
{
	listint_t *slow = (void *)head, *fast = (void *)head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
		{
			return (1);
		}
	}

	return (0);
}

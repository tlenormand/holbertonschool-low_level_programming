#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data of a linked list
 * @head: list address
 * Return: sumu of all the data
 */

int sum_listint(listint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}

#include <stdio.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: list address
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next_node;
    listint_t *tmp;
    int size = 0, index = 0;

    next_node = *h;
    tmp = *h;
	while (next_node && detect_loop(*h, next_node, index) != 0)
	{
        tmp = next_node;
        printf("[%p] %d\n", (void *)tmp, tmp->n);
        next_node = next_node->next;
        size += sizeof(tmp);
		free(tmp);
        index++;

	}
    *h = NULL;

    return (size);
}

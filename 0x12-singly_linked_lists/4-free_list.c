#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: address of node
 * @str: new string to add in the list
 * Return: new_list
 */

void free_list(list_t *head)
{
	list_t *list;

    list = *head;

		while (list->next != NULL)
        {
            free(list->str);
            list = list->next;
            free(list->next);
            free(list);
        }
    free(list);
}

/**
* _strlen - check the length of the string
* Return: length of the string
* @s: string
*/

int _strlen(const char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		;
	}

	return (i);
}

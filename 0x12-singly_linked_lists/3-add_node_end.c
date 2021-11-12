#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: address of node
 * @str: new string to add in the list
 * Return: new_list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *old_list;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);

	new_list->str = strdup(str);
	new_list->len = _strlen(str);

	if (*head == NULL)
		*head = new_list;
	else
	{
		old_list = *head;
		while (old_list->next != NULL)
			old_list = old_list->next;
		old_list->next = new_list;
	}

	return (new_list);
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

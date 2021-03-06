#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: address of the first node
 * @str: new string to add in the list
 * Return: xxx
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
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
		;

	return (i);
}

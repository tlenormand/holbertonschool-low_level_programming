#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - xxx
 * @h: xxx
 * Return: xxx
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t *new;
    list_t hello = {*str, _strlen(str), NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = str;
    new->len = _strlen(str);
    new->next = head;
    head = new;
    n = print_list(*head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(*head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}

/**
* _strlen - check the code
* Return: Always 0.
* @s: pointer
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

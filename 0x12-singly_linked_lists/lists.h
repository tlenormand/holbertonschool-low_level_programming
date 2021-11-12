#ifndef LIST_H
#define LIST_H

#include <stddef.h>

typedef struct list
{
    char *str;
    int len;
    void *next;
} list_t;

/*functions created before*/
int _putchar(char c);
int _strlen(const char *s);

/*prototypes for the exercices*/
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

/*function creates in exercices*/


#endif /* LIST_H */

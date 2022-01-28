#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: hash table to delete
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
		if (ht->array[i])
			free_list(ht->array[i]);

	free(ht->array);
	free(ht);
}


/**
 * free_list - function that frees a hash_node_t list
 *
 * @head: address of node
 *
 * Returns: None
 */

void free_list(hash_node_t *head)
{
	hash_node_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
}

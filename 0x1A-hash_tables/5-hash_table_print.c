#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: hash table to print
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, printed = 0;
	hash_node_t *print_node;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			print_node = ht->array[i];
			while (print_node)
			{
				if (printed != 0)
					printf(", ");
				printf("'%s': '%s'", print_node->key, print_node->value);
				printed += 1;
				print_node = print_node->next;
			}
		}
	}
	printf("}\n");
}

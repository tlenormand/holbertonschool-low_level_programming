#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: hash table you want to add or update the key/value
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (!key)
		return (0);

	if (!ht->array)
	{
		ht->array = malloc(sizeof(hash_node_t *) * ht->size);
		if (ht->array == NULL)
			return (0);
	}

	ht->array[index] = add_node(ht->array[index], key, value);

	return (1);
}


/**
 * add_node - function that adds a new node at the beginning of a
 * hash_node_t list
 *
 * @array: address of the first node
 * @key: key to add in node
 * @value: value to add in node
 *
 * Return: pointer to the new node
 */

hash_node_t *add_node(hash_node_t *array, const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = array;
	array = new;

	return (array);
}

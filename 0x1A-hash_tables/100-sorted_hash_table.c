#include "hash_tables.h"

/**
 * shash_table_create - xxx
 *
 * @size: xxx
 *
 * Return: xxx
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *shash_table = malloc(sizeof(shash_table_t));

	if (shash_table == NULL || size == 0)
		return (NULL);

	shash_table->size = size;

	shash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (shash_table->array == NULL)
	{
		free(shash_table);
		return (NULL);
	}

	shash_table->shead = NULL;
	shash_table->stail = NULL;

	for (i = 0; i < shash_table->size; i++)
		shash_table->array[i] = NULL;

	return (shash_table);
}


/**
 * shash_table_set - xxx
 *
 * @ht: xxx
 * @key: xxx
 * @value: xxx
 *
 * Return: xxx
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *head;
	unsigned long int index;

	if (!key || !value || !ht || !ht->array || !ht->size || strcmp(key, "") == 0)
		return (0);

	index = skey_index((const unsigned char *)key, ht->size);

	head = ht->array[index];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			if (head->value == NULL)
				return (0);
			return (1);
		}
		head = head->next;
	}

	ht->array[index] = sadd_node(ht->array[index], key, value);
	if (!ht->array[index])
		return (0);

	ht->shead = sort_shash_list(ht, index, key);
	if (!ht->shead)
		return (0);

	return (1);
}


/**
 * sadd_node - function that adds a new node at the beginning of a
 * hash_node_t list
 *
 * @array: address of the first node
 * @key: key to add in node
 * @value: value to add in node
 *
 * Return: pointer to the new node
 */

shash_node_t *sadd_node(shash_node_t *array, const char *key, const char *value)
{
	shash_node_t *new = malloc(sizeof(shash_node_t));

	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = array;
	new->sprev = NULL;
	new->snext = NULL;

	return (new);
}


/**
 * sort_shash_list - xxx
 *
 * @ht: xxx
 * @index: xxx
 * @key: xxx
 *
 * Return: xxx
 */

shash_node_t *sort_shash_list(shash_table_t *ht, unsigned long int index, const char *key)
{
	shash_node_t *shead_browse;

	if (!ht->shead)
	{
		ht->shead = ht->array[index];
		ht->stail = ht->array[index];
		ht->array[index]->sprev = NULL;
		ht->array[index]->snext = NULL;
		ht->array[index]->next = NULL;
		return (ht->shead);
	}
	else
	{
		shead_browse = ht->shead;
		while (strcmp(shead_browse->key, key) < 0 && shead_browse->key)
		{
			{
				ht->array[index]->sprev = shead_browse;
				ht->array[index]->snext = NULL;
				shead_browse->snext = ht->array[index];
				ht->stail = ht->array[index];
				return (ht->shead);
			}
			shead_browse = shead_browse->snext;
		}
		if (shead_browse->sprev)
		{
			shead_browse->sprev->snext = ht->array[index];
			ht->array[index]->sprev = shead_browse->sprev;
		}
		shead_browse->sprev = ht->array[index];
		ht->array[index]->snext = shead_browse;
	}
	while (shead_browse->sprev)
	{
		ht->shead = shead_browse->sprev;
		shead_browse = shead_browse->sprev;
	}
	return (ht->shead);
}


/**
 * shash_table_print - xxx
 *
 * @ht: xxx
 *
 * Return: xxx
 */

void shash_table_print(const shash_table_t *ht)
{
	unsigned long int printed = 0;
	shash_node_t *print_node;

	if (!ht)
		return;

	print_node = ht->shead;
	printf("{");

	while (print_node)
	{
		if (printed)
			printf(", ");
		printed += 1;

		printf("'%s': '%s'", print_node->key, print_node->value);
		print_node = print_node->snext;
	}

	printf("}\n");
}


/**
 * shash_table_print_rev - xxx
 *
 * @ht: xxx
 *
 * Return: xxx
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int printed = 0;
	shash_node_t *print_node;

	if (!ht)
		return;

	print_node = ht->stail;
	printf("{");

	while (print_node)
	{
		if (printed)
			printf(", ");
		printed += 1;

		printf("'%s': '%s'", print_node->key, print_node->value);
		print_node = print_node->sprev;
	}

	printf("}\n");
}


/**
 * shash_table_get - xxx
 *
 * @ht: xxx
 * @key: xxx
 *
 * Return: xxx
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!key || !ht || !ht->array || !ht->size || strcmp(key, "") == 0)
		return (NULL);

	index = skey_index((const unsigned char *)key, ht->size);

	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}

	return (NULL);
}


/**
 * shash_table_delete - xxx
 *
 * @ht: xxx
 *
 * Return: xxx
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
		if (ht->array[i])
			sfree_list(ht->array[i]);

	free(ht->array);
	free(ht);
}


/**
 * sfree_list - function that frees a hash_node_t list
 *
 * @head: address of node
 *
 * Returns: None
 */

void sfree_list(shash_node_t *head)
{
	shash_node_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
}


/**
 * skey_index - gives you the index of a key
 *
 * @key: key to get
 * @size: size of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored
 * in the array of the hash table
 */

unsigned long int skey_index(const unsigned char *key, unsigned long int size)
{
	return (shash_djb2(key) % size);
}


/**
 * shash_djb2 - implementing the hash table
 *
 * @str: str to add to hash_table_t
 *
 * Return: pointer to hash_table_t
 */

unsigned long int shash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}

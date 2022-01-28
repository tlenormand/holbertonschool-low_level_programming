#include "hash_tables.h"

/**
 * hash_djb2 - implementing the hash table
 *
 * @str: str to add to hash_table_t
 *
 * Return: pointer to hash_table_t
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}

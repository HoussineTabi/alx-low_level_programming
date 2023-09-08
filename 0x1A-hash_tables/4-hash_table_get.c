#include "hash_tables.h"
/**
 * char *hash_table_get - gets an element in a hash table
 * @ht: the hash table
 * @key: the key of the to find the element
 *
 * Return: the value of the key exist and NULL if not
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (!key || !ht)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	return (node->value);
}

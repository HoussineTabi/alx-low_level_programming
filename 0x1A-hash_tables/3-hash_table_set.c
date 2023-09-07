#include "hash_tables.h"
/**
 * hash_table_set - creates and insert a nude in a hash table
 * @ht: the hash table
 * @key: the key to make the index
 * @value: the value of the node
 *
 * Return: 1 in success and 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t node;
	unsigned long int index;

	if (!ht || !key)
		return (0);
	node.key = (char *)key;
	node.value = (char *)value;
	node.next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	ht->array[index] = &node;
	return (1);
}

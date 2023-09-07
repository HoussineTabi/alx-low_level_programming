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
	hash_node_t *node_at_end = NULL;
	unsigned long int index;

	if (!ht || !key || !value)
		return (0);
	node.key = (char *)strdup(key);
	node.value = (char *)strdup(value);
	node.next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if (!ht->array[index])
		ht->array[index] = &node;
	else
	{
		node_at_end = ht->array[index];
		while (node_at_end->next)
			node_at_end = node_at_end->next;

		node_at_end->next = &node;
	}
	return (1);
}

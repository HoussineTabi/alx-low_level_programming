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
	hash_node_t *node = NULL;
	hash_node_t *node_at_end = NULL;
	unsigned long int index;

	if (!ht || !key || ht->array == NULL || !value || ht->size == 0)
		return (0);
	if (*key == 0 || *value == 0)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value), node->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (0);
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		node_at_end = ht->array[index];
		while (node_at_end->next)
		{
			if (strcmp(node_at_end->key, key))
				node_at_end = node_at_end->next;
			else
			{
				free(node_at_end->value), node_at_end->value = strdup(value);
			}
		}
		if (node_at_end->next == NULL && strcmp(node_at_end->key, key))
			node->next = ht->array[index], ht->array[index] = node;
		else
		{
			free(node), free(node_at_end->value);
			node_at_end->value = strdup(value);
		}
	}
	return (1);
}

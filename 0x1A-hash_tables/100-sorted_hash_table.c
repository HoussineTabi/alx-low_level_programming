#include "hash_tables.h"
/**
 * shash_table_t - creates a haash table
 * @size: the siaze of the hash table
 *
 * Return: a pointer to the hash table or null in failed
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = NULL;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	ht->shead = NULL, ht->stail = NULL;
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t) * size);
	if (!ht->array)
		return (NULL);
	while (size--)
		ht->array[size] = NULL;
	return (ht);
}
/**
 * shash_table_set - set an element into the hahs table
 * @key: the string key to make the index
 * @value: the value of the new hash node
 *
 * Return: 1 in success and 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node = NULL;
	unsigned long int index;

	if (!ht || !ht->array)
		return (0);
	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node->value = strdup(value);
	node->key = strdup(key);
	if (!ht->array[index])
	{
		if (!ht->shead)
			ht->shead = node;
		if (!ht->stail)
			ht->stail = node;
		node->sprev = NULL;
		node->snext = NULL;
		ht->array[index] = node;
	}
	else
	{
		ht->stail->snext = node;
		node->sprev = ht->stail;
		node->snext = (NULL);
		ht->stail = ht->stail->next;
		ht->array[index] = NULL;
	}
	return (1);
}


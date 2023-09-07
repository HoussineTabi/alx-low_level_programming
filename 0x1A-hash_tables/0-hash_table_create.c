#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the arr
 * Return: the pointer of the array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int count;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
		return (NULL);
	for (count = 0; count < size; count++)
		table->array[count] = NULL;
	table->size = size;
	return (table);
}

#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the arr
 * Return: the pointer of the array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t) * size);
	return (table);
}
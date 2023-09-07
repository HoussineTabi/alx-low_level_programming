#include "hash_tables.h"
/**
 * key_index - creates the key for the index
 * @key: the key to form the index
 * @size: the size of the hash table
 * Return: the index of the element
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash  = 0;

	hash = hash_djb2(key);
	return (hash % size);
}

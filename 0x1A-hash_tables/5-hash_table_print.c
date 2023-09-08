#include "hash_tables.h"
/**
 * hash_table_print - prints the element of a hash table
 * @ht: the hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count = 0;
	hash_node_t *node = NULL;
	int check = 0;

	if (ht != NULL)
	{
		printf("{");
		if (ht->array && ht->size)
		{
		for (; count < ht->size; count++)
		{
			if (check && ht->array[count])
				printf(", ");
			if (ht->array[count])
			{
				node = ht->array[count];
				while (node->next)
				{
					printf("'%s': '%s', ", node->key, node->value);
					node = node->next;
				}
				printf("'%s': '%s'", node->key, node->value);
				node = NULL;
				check = 1;
			}
		}
		}
		printf("}\n");
	}
}

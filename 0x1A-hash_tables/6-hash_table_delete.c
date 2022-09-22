#include "hash_tables.h"


/**
 * hash_table_delete - Deletes the hash nodes and table
 * @ht: The hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	size_t i;
	hash_node_t *ptr;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				ht->array[i] = ptr->next;
				free(ptr->key);
				free(ptr->value);
				free(ptr);
				ptr = ht->array[i];
			}
			free(ht->array[i]);
			ht->array[i] = NULL;
			
		}
	}
	free(ht);
	ht = NULL;
}

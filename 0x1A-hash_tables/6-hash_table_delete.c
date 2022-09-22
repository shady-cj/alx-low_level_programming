#include "hash_tables.h"


/**
 * hash_table_delete - Deletes the hash nodes and table
 * @ht: The hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	size_t i;
	hash_node_t *ptr, *pl;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				pl = ptr->next;
				free(ptr->key);
				free(ptr->value);
				free(ptr);
				ptr = pl;
			}
			free(pl);
			pl = NULL;
			
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}

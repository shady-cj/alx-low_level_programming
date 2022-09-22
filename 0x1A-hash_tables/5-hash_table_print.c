#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table
 * @ht: The hash table
 * Return: void
 */


void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr = NULL;
	size_t i, first = 1;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (!first)
				printf(", ");
			first = 0;
			ptr = ht->array[i];
			while (ptr)
			{
				if (ptr->next == NULL)
					printf("'%s': '%s'", ptr->key, ptr->value);
				else
					printf("'%s': '%s',", ptr->key, ptr->value);
				ptr = ptr->next;
			}
		}
	}
	printf("}\n");
}

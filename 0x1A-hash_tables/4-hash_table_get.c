#include "hash_tables.h"


/**
 * hash_table_get - Gets a particular element from the hash
 * table
 * @ht: The hash table
 * @key: The key to retrieve
 * Return: The value of the key if present else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t idx;
	hash_node_t *ptr;

	if (key == NULL || strlen(key) == 0 || ht == NULL)
		return (NULL);

	idx = key_index((const unsigned char *) key, ht->size);

	if (ht->array[idx] != NULL)
	{
		ptr = ht->array[idx];

		while (ptr != NULL)
		{
			if (strcmp(ptr->key, key) == 0)
				return (ptr->value);
			ptr = ptr->next;
		}
	}
	return (NULL);
}

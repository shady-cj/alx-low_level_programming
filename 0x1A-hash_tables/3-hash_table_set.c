#include "hash_tables.h"


/**
 * hash_table_set - The sets a value into the hash table
 * @ht: The hash table
 * @key: The key to be stored
 * @value: The value to the key
 * Return: 1 if success and 0 if failed
 */

int hash_table_set(hash_table_t *ht, const char *key,
		const char *value)
{
	size_t index;
	hash_node_t *head_ptr = NULL;
	hash_node_t *ptr;

	if (key == NULL || strlen(key) == 0 || ht == NULL)
		return (0);
	head_ptr = malloc(sizeof(hash_node_t));
	if (head_ptr == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	head_ptr->key = strdup(key);
	head_ptr->value = value == NULL ? NULL : strdup(value);
	head_ptr->next = NULL;
	if (ht->array[index] != NULL)
	{
		ptr = ht->array[index];
		while (ptr != NULL)
		{
			if (strcmp(ptr->key, key) == 0)
			{
				free(ptr->value);
				free(head_ptr->key);
				free(head_ptr->value);
				free(head_ptr);
				ptr->value = strdup(value);
				return (1);
			}
			ptr = ptr->next;
		}
		head_ptr->next = ht->array[index];
	}
	ht->array[index] = head_ptr;
	return (1);
}

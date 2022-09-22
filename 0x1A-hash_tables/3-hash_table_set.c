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

	if (key == NULL || strlen(key) == 0)
		return (0);
	head_ptr = malloc(sizeof(hash_node_t));
	index = key_index((const unsigned char *) key, ht->size);
	head_ptr->key = strdup(key);
	head_ptr->value = value != NULL ? strdup(value) : NULL;
	head_ptr->next = NULL;

	if (ht->array[index] != NULL)
		head_ptr->next = ht->array[index];
	ht->array[index] = head_ptr;
	return (1);
}

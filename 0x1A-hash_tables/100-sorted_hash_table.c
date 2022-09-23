#include "hash_tables.h"

shash_node_t *store_values(shash_node_t *head_ptr, const char *key,
		const char *value);
shash_node_t *check_and_update(shash_table_t *ht, shash_node_t *head_ptr,
		const char *key, const char *value, size_t i);
shash_node_t *update_linked_list(shash_table_t *ht, const char *key,
		shash_node_t *head_ptr);
/**
 * shash_table_create - Creates a new hash table for the sorted
 * hash table
 * @size: The size of the hash table
 * Return: The hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;
	size_t i;

	hash_table = malloc(sizeof(shash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->shead = NULL;
	hash_table->stail = NULL;
	hash_table->array = malloc(sizeof(shash_node_t) * size);

	if (hash_table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}
	return (hash_table);
}

/**
 * shash_table_set - sets the value against the key in the hash table
 * @ht: The hash table
 * @key: The key to be set
 * @value: The value to the key
 * Return: 1 if success and 0 if not
 */

int shash_table_set(shash_table_t *ht, const char *key,
		const char *value)
{
	shash_node_t *head_ptr;
	size_t index;

	if (ht == NULL || strlen(key) == 0 || ht->array == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	head_ptr = malloc(sizeof(shash_node_t));
	if (head_ptr == NULL)
		return (0);
	head_ptr->next = NULL;
	head_ptr = check_and_update(ht, head_ptr, key, value,
			index);
	if (head_ptr == NULL)
		return (1);
	head_ptr = store_values(head_ptr, key, value);
	head_ptr = update_linked_list(ht, key, head_ptr);
	ht->array[index] = head_ptr;
	return (1);
}



/**
 * update_linked_list - This update the sorted hash table linked list
 * @ht: The hash table
 * @key: The key
 * @head_ptr: The head pointer
 * Return: The head pointer
 */

shash_node_t *update_linked_list(shash_table_t *ht, const char *key,
		shash_node_t *head_ptr)
{
	shash_node_t *ptr = NULL, *ptr_prev = NULL;

	ptr = ht->shead;
	while (ptr != NULL)
	{
		if (strcmp(key, ptr->key) < 0)
		{
			if (ptr_prev != NULL)
				ptr_prev->snext = head_ptr;
			else
				ht->shead = head_ptr;
			head_ptr->sprev = ptr_prev;
			head_ptr->snext = ptr;
			ptr->sprev = head_ptr;
			break;
		}
		ptr_prev = ptr;
		ptr = ptr->snext;
	}
	if (ptr == NULL)
	{
		if (ptr_prev != NULL)
			ptr_prev->snext = head_ptr;
		else
			ht->shead = head_ptr;
		head_ptr->sprev = ptr_prev;
		head_ptr->snext = ptr;
		ht->stail = head_ptr;
	}
	return (head_ptr);
}

/**
 * check_and_update - This function checks and update the hash
 * table if entry already exist(helper function)
 * @ht: The table
 * @head_ptr: The new element to be added
 * @key: The key
 * @value: The value to the key
 * @i: The index position
 * Return: 1 if updated existing entry  0 if not
 */

shash_node_t *check_and_update(shash_table_t *ht, shash_node_t *head_ptr,
		const char *key, const char *value, size_t i)
{
	shash_node_t *ptr = NULL;

	if (ht->array[i] != NULL)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			if (strcmp(ptr->key, key) == 0)
			{
				free(ptr->value);
				free(head_ptr);
				ptr->value = strdup(value);
				return (NULL);
			}
			ptr = ptr->next;
		}
		head_ptr->next = ht->array[i];
	}
	return (head_ptr);
}

/**
 * store_values - An helper fn. Stores value to the head pointer
 * @head_ptr: Head pointer
 * @key: The key
 * @value: The value
 * Return: The head ptr
 */

shash_node_t *store_values(shash_node_t *head_ptr, const char *key,
		const char *value)
{
	head_ptr->key = strdup(key);
	head_ptr->value = strdup(value);
	head_ptr->sprev = NULL;
	head_ptr->snext = NULL;
	return (head_ptr);
}


/**
 * shash_table_get - This gets the corresponding key value from the
 * hash tsble
 * @ht: The hash table
 * @key: The key to get
 * Return: The value to the key
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *ptr;
	size_t index;

	if (ht == NULL || ht->array == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);

	ptr = ht->array[index];

	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}




/**
 * shash_table_print - prints the sorted hash table
 * @ht: The hash table
 * Return: void
 */


void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ptr;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	ptr = ht->shead;
	while (ptr != NULL)
	{
		printf("'%s': '%s'", ptr->key, ptr->value);
		if (ptr->snext != NULL)
			printf(", ");
		ptr = ptr->snext;
	}
	printf("}\n");
}



/**
 * shash_table_print_rev - prints the sorted hash table in reverse
 * @ht: The hash table
 * Return: void
 */


void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ptr;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	ptr = ht->stail;
	while (ptr != NULL)
	{
		printf("'%s': '%s'", ptr->key, ptr->value);
		if (ptr->sprev != NULL)
			printf(", ");
		ptr = ptr->sprev;
	}
	printf("}\n");
}


/**
 * shash_table_delete - This function deletes the hash table
 * @ht: The hash table
 * Return: void
 */


void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *ptr, *temp;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	ptr = ht->shead;
	while (ptr != NULL)
	{
		free(ptr->key);
		free(ptr->value);
		temp = ptr->snext;
		free(ptr);
		ptr = temp;
	}
	free(ht->array);
	free(ht);
}

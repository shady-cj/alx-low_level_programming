#include "hash_tables.h"

/**
 * key_index - Is a function that converts the hashed int
 * into an index within the size of the array
 * @key: The key to be hashed
 * @size: The size of the array
 */

unsigned long int key_index(const unsigned char *key,
		unsigned long int size)
{
	size_t hashed_index = hash_djb2(key);

	return (hashed_index % size);
}

#include <stdlib.h>
/**
 * _realloc - A function that reallocates a block using
 * malloc and free
 * @ptr: A pointer to the previously allocated block
 * @old_size: The old size of the previous space in bytes
 * @new_size: The new size to be reallocated
 * Return: A void pointer to the newly allocated block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ret;
	char *filler, *ptr2;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = ptr;
	ret = malloc(sizeof( new_size);
	if (ptr == NULL)
	{
		free(ptr);
		return (ret);
	}
	if (new_size <= old_size)
	{
		return (ptr);
	}
	if (ret == NULL)
<<<<<<< HEAD
=======
		return (NULL);
	ptr2 = ptr;
	filler = ret;
	while(*ptr2)
>>>>>>> parent of 707d177 (implementing realloc clone)
	{
		free(ptr);
		return (NULL);
	}
	filler = ret;
	i = 0;
	while (i < old_size)
	{
		filler[i++] = *ptr2++;
	}
	free(ptr);
	return (ret);
}

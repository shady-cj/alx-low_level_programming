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

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = ptr
	ret = malloc(sizeof(ptr2) * new_size);
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
	{
		free(ptr);
		return (NULL);
	}
	filler = ret;
	while (*ptr2)
	{
		*filler = *ptr2;
		filler++;
		ptr2++;
	}
	free(ptr);
	return (ret);
}

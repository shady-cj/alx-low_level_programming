#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: The size of each element
 * Return: a void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ret;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ret = malloc(nmemb * size);
	if (ret == NULL)
		return (NULL);
	return (ret);
}

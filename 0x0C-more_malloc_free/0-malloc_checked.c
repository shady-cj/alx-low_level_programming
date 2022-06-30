#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: The size of the int to be allocated
 * Return: A void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}

#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - A function that frees the struct passed in
 * @d: The struct to be released
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

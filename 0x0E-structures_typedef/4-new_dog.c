#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - a function that creates a copy of struct dog
 * @name: The name of the dog to be copied
 * @age: The age of the dog
 * @owner: The copy of the owner of the dog
 * Return: The dog_t data type defined in struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *n;
	char *o;
	
	n = name;
	o = owner;
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	(*my_dog).name = n;
	(*my_dog).age = age;
	(*my_dog).owner = o;

	return (my_dog);

}

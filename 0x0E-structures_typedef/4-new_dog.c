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
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->name = malloc(sizeof(char *) * strlen(name) + 1);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = malloc(sizeof(char*) * strlen(owner) + 1);
	if (my_dog->owner == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->name = strcpy(my_dog->name, name);
	my_dog->age = age;
	my_dog->owner = strcpy(my_dog->owner, owner);

	return (my_dog);

}

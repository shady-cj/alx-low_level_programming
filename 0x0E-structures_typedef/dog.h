#ifndef DOG_H
#define DOG_H

/**
 * struct dog - stores information about dogs
 * @name: The name of the dog
 * @age: The age of the dog of type float
 * @owner: The owner of the dog of type string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif

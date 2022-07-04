
/**
 * init_dog - a function that initializes a variable off type dog
 * @d: The variable holding the user defined data type
 * @name: The name of the dog
 * @age: The dog's age
 * @owner: The owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owwner = owner;
}

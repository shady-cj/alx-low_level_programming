#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - A function that prints the value of the struct dog
 * @d: The struct d datatype to be printed
 * Return: void
 */
void print_dog(struct dog *d)
{
	float a;
	char *n;
	char *o;

	if (d != NULL)
	{
		n = (*d).name;
		n = n == NULL ? "(nil)" : n;
		a = (*d).age;
		o = (*d).owner;
		o = o == NULL ? "(nil)" : o;
		printf("Name: %s\n", n);
		if (!a)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", a);
		printf("Owner: %s\n", o);
	}
}

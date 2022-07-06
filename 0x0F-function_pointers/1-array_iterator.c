#include <stdlib.h>
/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array
 * @array: The array to be printed
 * @action: The helper function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	if (array == NULL || size == 0 || action == NULL)
		return;
	i = 0;
	while (i < size)
		action(array[i++]);	
}

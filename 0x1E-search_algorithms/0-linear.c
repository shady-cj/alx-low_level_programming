#include <stdio.h>
#include <stdlib.h>


/**
 * linear_search - A function that performs a linear search algorithm
 * to find a value @value from an array of @array of size @size
 * @array: The pointer to the first number of the elements to be searched
 * @size: The size of the array to be searched
 * @value: The value to search for
 * Return: -1 if not found or the index of the first occurence of element
 * if found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

#include <stdlib.h>
/**
 * int_index - a function that searches for an integer.
 * @array: The array of integers to search
 * @size: The number of integers in the array
 * @cmp: The helper function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	i = 0;
	while(i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}

	return (-1);
}

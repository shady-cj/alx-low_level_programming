#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search - performing a jump search in an array
 * @array of size @size to find element @value
 * @array: The array to be searched
 * @size: The size of the array
 * @value: The element to be searched for.
 * Return: -1 if not found or the index of first occurence
 * if found
 */


int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t i = 0, j, threshold;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		i += jump;
		j = i - jump;
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		threshold = i;
		if (i >= size)
			threshold = size - 1;
		if (value <= array[threshold] || i >= size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", j, i);
			while (j <= threshold)
			{
				printf("Value checked array[%lu] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
				j++;
			}
			return (-1);
		}
	}
	return (-1);
}

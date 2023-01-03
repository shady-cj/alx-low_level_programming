#include <stdio.h>
#include <stdlib.h>

/**
 * interpolation_search - using interpolation to search for an
 * an element @value in the array @array of size @size
 * @array: The array
 * @size: The size of the array
 * @value: The element to be searched
 * Return: The index of the element if found or -1 if not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) 
				* (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (1);
}

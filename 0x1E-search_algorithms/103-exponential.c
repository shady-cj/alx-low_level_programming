#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - Prints a descriptive information about
 * which part of the array is being searched during
 * binary search in the function below
 * @array: The array
 * @lo: The starting index of the part to be searched
 * @hi: The highest index of the part to be searched
 * Return: void
 */

void print_array(int *array, size_t lo, size_t hi)
{
	printf("Searching in array: ");
	while (lo <= hi)
	{
		if (lo == hi)
			printf("%d", array[lo]);
		else
			printf("%d, ", array[lo]);
		lo++;
	}
	printf("\n");
}


/**
 * exponential_search - Using a exponential search to search
 * for element @value in an array @array of size @size
 * @array: The array to search
 * @size: The size of the array
 * @value: The element to be searched
 * Return: The index of the element if found or -1 if not found
 */


int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t min, low, high, mid;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	min = i < size ? i : size - 1;
	low = i / 2;
	high = min;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	while (low <= high)
	{
		mid = (low + high) / 2;
		print_array(array, low, high);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

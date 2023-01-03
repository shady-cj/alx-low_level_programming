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
 * binary_search - Performing a binary search on an array @array
 * of size @size in search of element @value
 * @array: The array to be searched
 * @size: The size of the element to be searched
 * @value: The value to be searched for
 * Return: -1 if not found or the index of the first occurence of
 * the element in which in this case the element to be searched occurs
 * just once
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t lo = 0;
	size_t hi = size - 1;

	if (array == NULL)
		return (-1);
	while (lo <= hi)
	{
		mid = (lo + hi) / 2;
		print_array(array, lo, hi);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			hi = mid - 1;
		else
			lo = mid + 1;
	}
	return (-1);
}

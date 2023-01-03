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
 * binary_search_rec - Implementing binary search with recursion
 * @array: The array
 * @target: The element to be found
 * @low: The current low index
 * @high: The current high index
 * Return: The index of first occurence and -1 if not found
 */

int binary_search_rec(int *array, int target, size_t low, size_t high)
{
	size_t mid;

	if (low > high)
		return (-1);
	print_array(array, low, high);
	mid = (low + high) / 2;
	if (array[mid] == target)
	{
		if (mid == 0 || (mid > 0 && array[mid - 1] < array[mid]))
			return (mid);
		high = mid;
	}
	else if (target < array[mid])
		high = mid - 1;
	else
		low = mid + 1;
	return (binary_search_rec(array, target, low, high));
}

/**
 * advanced_binary - Using recursion to binary search for the first
 * occurence of an element @value in an array @array of size @size
 * @array: The array
 * @size: The size of the array
 * @value: The element to be searched
 * Return: The index of the first occurence or -1 if not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_rec(array, value, 0, size - 1));
}

#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: The minimum number
 * @max: The maximum number
 * Return: returns the array of ints if all conditions are met
 */
int *array_range(int min, int max)
{
	int diff, i, j;
	int *arr;

	if (min > max)
		return (NULL);
	diff = max - min + 1;
	arr = malloc(sizeof(int) * diff);
	j = min;
	if (arr == NULL)
		return (arr);

	for (i = 0; j <= max; i++, j++)
		arr[i] = j;
	return (arr);

}
